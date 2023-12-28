#include <stdio.h>
int searchEle(int size, int ele, int *arr);
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

    int ele;
    printf("Enter Element to be Search : ");
    scanf("%d", &ele);
    int ans = searchEle(size, ele, arr);
    if (ans >= 0)
    {
        printf("Element is Found and it is present at %d index", ans);
    }
    else
    {
        printf("Element is Not Found in Given Array");
    }

    printf("\n");
    return 0;
}

int searchEle(int size, int ele, int *arr)
{
    int action = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            action = i;
        }
    }
    return action;
}