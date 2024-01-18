#include <stdio.h>
#include <string.h>
#include <time.h>

void main()
{
    struct data
    {
        char cust_name[30];
        char food_name[30];
        int price;
        char name[10];
        int date[3];
        int age;
    } d1;

    cust_name(&d1.cust_name);
    food_name(&d1.food_name, &d1.price);

    int year, month, day;
    current_date(&year, &day, &month);
    d1.date[0] = year;
    d1.date[1] = month;
    d1.date[2] = day;
    
    printf("**********************************************************\n");
    printf("********************* HOTEL KARTIK ***********************\n");
    printf(" GST NO: 27MUEBV4565S7Z8 \t\t Date: %04d-%02d-%02d\n", d1.date[0], d1.date[1], d1.date[2]);
    printf(" Customer Name : %s \t Bill No : 100\n", d1.cust_name);
    printf("**********************************************************\n");
    printf(" Sr.No \t Food Name \t\t Food Price\n");
    printf("----------------------------------------------------------\n");
    printf(" 1 \t %s \t\t %d\n", d1.food_name, d1.price);
}

void food_name(char *food_name[], int *price)
{
    printf("Enter Food Name : ");
    gets(food_name);
    printf("Enter Food price : ");
    scanf("%d", price);
}

void cust_name(char *cust_name[])
{
    printf("Enter Customer Name : ");
    gets(cust_name);
}

void current_date(int *year, int *day, int *month)
{
    time_t currentTime;
    time(&currentTime);

    // Convert the current time to a struct tm (time structure)
    struct tm *localTime = localtime(&currentTime);

    // Extract date components
    *year = localTime->tm_year + 1900; // Years since 1900
    *month = localTime->tm_mon + 1;    // Months are 0-based
    *day = localTime->tm_mday;         // Day of the month
}