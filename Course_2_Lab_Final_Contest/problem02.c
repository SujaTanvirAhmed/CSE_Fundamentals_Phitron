#include <stdio.h>

void sort_array(unsigned int *ptr_start, unsigned int *ptr_end, char order);
void swap_item(unsigned int *ptr1, unsigned int *ptr2);
void calc_diff(int *diff_ptr, unsigned int *arr1_ptr, unsigned int *arr2_ptr, unsigned int size);

int main(void)
{
    unsigned int n, i;

    scanf("%u", &n);

    unsigned int arr1[n], arr2[n];
    int diff[n];

    for (i = 0; i < n; i++)
        scanf("%u", &arr1[i]);

    for (i = 0; i < n; i++)
        scanf("%u", &arr2[i]);

    sort_array(arr1, &arr1[n - 1], 'a');
    sort_array(arr2, &arr2[n - 1], 'd');
    calc_diff(diff, arr1, arr2, n);

    for (i = 0; i < n; i++)
    {
        printf("%d", diff[i]);
        if (i == n - 1)
            printf("\n");
        else
            printf(" ");
    }

    return 0;
}

void sort_array(unsigned int *ptr_start, unsigned int *ptr_end, char order)
{
    unsigned int *ptr_runner;
    int swap_happened, condition;
    condition = 0;
    while (1)
    {
        ptr_runner = ptr_start;
        swap_happened = 0;
        while (ptr_runner != ptr_end)
        {
            if (order == 'a')
                condition = *ptr_runner > *(ptr_runner + 1) ? 1 : 0;
            else if (order == 'd')
                condition = *ptr_runner < *(ptr_runner + 1) ? 1 : 0;
            if (condition)
            {
                swap_item(ptr_runner, ptr_runner + 1);
                swap_happened = 1;
            }
            ptr_runner++;
        }
        if (!swap_happened)
            break;
    }
}

void swap_item(unsigned int *ptr1, unsigned int *ptr2)
{
    unsigned int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void calc_diff(int *diff_ptr, unsigned int *arr1_ptr, unsigned int *arr2_ptr, unsigned int size)
{
    unsigned char index;
    for (index = 0; index < size; index++)
        *(diff_ptr + index) = *(arr1_ptr + index) - *(arr2_ptr + index);
}