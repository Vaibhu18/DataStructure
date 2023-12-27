#include <stdio.h>
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
    
    printf("\n");
    return 0;
}