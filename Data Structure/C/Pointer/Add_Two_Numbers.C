#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter 1st and 2nd Number : ");
    scanf("%d%d", &num1, &num2);
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    printf("%d \n", *ptr1+ *ptr2);

    return 0;
}