#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter element number %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    printArray(arr, n);
    quicksort(arr, 0, n - 1);

    printf("Sorted array: ");
    printArray(arr, n);
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(arr, low, high);
        quicksort(arr, low, pivot - 1);
        quicksort(arr, pivot + 1, high);
    }
}

int partition(int arr[], int low, int high)
{

    int pivot = arr[high];
    int idx = low - 1;
    int j;
    for (j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            idx++;
            int temp = arr[j];
            arr[j] = arr[idx];
            arr[idx] = temp;
        }
    }
    idx++;
    int temp = arr[high];
    arr[high] = arr[idx];
    arr[idx] = temp;

    return idx;
}