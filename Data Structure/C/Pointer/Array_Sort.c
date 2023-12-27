#include <stdio.h>
void sort(int size, int *arr);
int main()
{
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Original Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    sort(size, arr);

    printf("\nAfter Sorting Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n");
    return 0;
}

void sort(int size, int *arr)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[j] >= arr[i])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}