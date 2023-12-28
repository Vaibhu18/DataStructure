#include <stdio.h>
void copyArrayElements(int *arr, int *newArr, int size);
int main()
{
    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    int arr[size];
    int newArr[size];
    printf("Enter Array Elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original Array : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    copyArrayElements(arr, newArr, size);

    printf("\nAfter Copy : ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", newArr[i]);
    }

    printf("\n");
    return 0;
}

void copyArrayElements(int *arr, int *newArr, int size)
{
    for (int i = 0; i < size; i++)
    {
        *(newArr + i) = *(arr + i);
        // newArr[i] = arr[i];
    }
}