#include <stdio.h>

void main()
{
    int arr[5] = {11, 58, 62, 41, 12};
    int len = sizeof(arr) / sizeof(arr[0]);
    int max = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf(" Max Element is : %d ", max);
    printf("\n");
}