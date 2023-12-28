#include <stdio.h>
void printEle(int *arr, int size);
int main()
{
    int size;
    printf("Enter Size of Array : ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter Array Elements : ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printEle(arr, size);

    printf("\n");
    return 0;
}

void printEle(int *arr, int size)
{
    if (size > 0)
    {
        printf("%d ", *arr);
        arr++;
        size--;
        printEle(arr, size);
    }
}