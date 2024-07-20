#include <stdio.h>
void selection_sort(int arr[], int n)
{
    int pos, small;
    for (int i = 0; i < n - 1; i++)
    {
        small = arr[i];
        pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < small)
            {
                small = arr[j];
                pos = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}
int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}