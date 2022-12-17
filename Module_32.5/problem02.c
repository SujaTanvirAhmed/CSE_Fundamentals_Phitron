#include <stdio.h>

unsigned int sum_recursive(int *arr_ptr_strt, int *arr_ptr_end);

int main(void)
{
    unsigned int n, last_sum, temp, i;
    printf("\nEnter array size: ");
    scanf("%u", &n);
    unsigned int arr[n];

    printf("Enter integer array elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%u", &temp);
        arr[i] = (int)temp < 0 ? -1 * temp : temp;
    }

    last_sum = sum_recursive(arr, &arr[n - 1]);
    printf("\nSum of last digits: %u\n", last_sum);

    return 0;
}

unsigned int sum_recursive(int *arr_ptr_strt, int *arr_ptr_end)
{
    if (arr_ptr_strt == arr_ptr_end)
        return *arr_ptr_end % 10;
    return *arr_ptr_strt % 10 + sum_recursive(arr_ptr_strt + 1, arr_ptr_end);
}