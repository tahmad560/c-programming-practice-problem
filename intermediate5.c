#include<stdio.h>
int main()
{
    int month;
    printf("Enter the number of month : ");
    scanf("%d",&month);
    switch (month)
    {
    case 1: 
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("This month has 31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("This month has 30 days");
    break;
    case 2:
    printf("This month has 28 or 29 days");
    default:
    printf("Invalid input");
        break;
    }
}