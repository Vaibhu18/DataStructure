#include <stdio.h>

void swapNum(int *ptr1, int *ptr2);

int main()
{
    int num1, num2;
    printf("Enter 1st and 2nd Number : ");
    scanf("%d%d", &num1, &num2);

    swapNum(&num1, &num2);

    printf("%d %d \n", num1, num2);

    return 0;
}

void swapNum(int *ptr1, int *ptr2)
{
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}