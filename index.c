#include <stdio.h>
#include <stdlib.h>

// Structure to represent a hotel guest
struct Guest
{
    char name[100];
    int roomNumber;
    int nights;
    float roomRate;
};

// Function to calculate the total bill for a guest
float calculateBill(struct Guest guest)
{
    return guest.nights * guest.roomRate;
}

// Function to display the bill for a guest
void displayBill(struct Guest guest, float totalBill)
{
    printf("\n----- Bill Details -----\n");
    printf("Guest Name: %s\n", guest.name);
    printf("Room Number: %d\n", guest.roomNumber);
    printf("Number of Nights: %d\n", guest.nights);
    printf("Room Rate per Night: $%.2f\n", guest.roomRate);
    printf("Total Bill: $%.2f\n", totalBill);
}

int main()
{
    struct Guest guests[100];
    int numberOfGuests = 0;

    int choice;
    do
    {
        printf("**********************************************************\n");
        printf("********************* HOTEL KARTIK ***********************\n");
        printf("1. Generate Bill\n");
        printf("2. Bill History\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Add guest information
            printf("Enter Cust_Name: ");
            scanf("%s", guests[numberOfGuests].name);
            printf("Enter Room Number: ");
            scanf("%d", &guests[numberOfGuests].roomNumber);
            printf("Enter Number of Nights: ");
            scanf("%d", &guests[numberOfGuests].nights);
            printf("Enter Room Rate per Night: $");
            scanf("%f", &guests[numberOfGuests].roomRate);
            numberOfGuests++;
            break;
        case 2:
            // Generate and display bill for each guest
            for (int i = 0; i < numberOfGuests; i++)
            {
                float totalBill = calculateBill(guests[i]);
                displayBill(guests[i], totalBill);
            }
            break;
        case 3:
            // Exit the program
            printf("Exiting Hotel Billing System. Goodbye!\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);
    for (int i = 0; i < 50; i++)
    {
        printf("%s",guests[i]);
    }
    

    return 0;
}

// #include <stdio.h>
// #include <string.h>
// #include <time.h>

// void main()
// {
//     struct data
//     {
//         char cust_name[30];
//         char food_name[30];
//         int price;
//         char name[10];
//         int date[3];
//         int age;
//     } d1;

//     cust_name(&d1.cust_name);
//     food_name(&d1.food_name, &d1.price);

//     int year, month, day;
//     current_date(&year, &day, &month);
//     d1.date[0] = year;
//     d1.date[1] = month;
//     d1.date[2] = day;

//     printf(" GST NO: 27MUEBV4565S7Z8 \t\t Date: %04d-%02d-%02d\n", d1.date[0], d1.date[1], d1.date[2]);
//     printf(" Customer Name : %s \t Bill No : 100\n", d1.cust_name);
//     printf("**********************************************************\n");
//     printf(" Sr.No \t Food Name \t\t Food Price\n");
//     printf("----------------------------------------------------------\n");
//     printf(" 1 \t %s \t\t %d\n", d1.food_name, d1.price);
// }

// void food_name(char *food_name[], int *price)
// {
//     printf("Enter Food Name : ");
//     gets(food_name);
//     printf("Enter Food price : ");
//     scanf("%d", price);
// }

// void cust_name(char *cust_name[])
// {
//     printf("Enter Customer Name : ");
//     gets(cust_name);
// }

// void current_date(int *year, int *day, int *month)
// {
//     time_t currentTime;
//     time(&currentTime);

//     // Convert the current time to a struct tm (time structure)
//     struct tm *localTime = localtime(&currentTime);

//     // Extract date components
//     *year = localTime->tm_year + 1900; // Years since 1900
//     *month = localTime->tm_mon + 1;    // Months are 0-based
//     *day = localTime->tm_mday;         // Day of the month
// }