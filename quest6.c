#include<stdio.h>
int main()
{
    int year,remainder;
    printf("Enter the year");
    scanf("%d",&year);
    remainder=((year%4==0)&&((year%400==0)||(year%100!=0)));
    switch (remainder)
    {
        case 1:
        printf("Leap Year");
        break;
        case 0:
        printf("Not Leap year");
        break;
        default:
        printf("Invalid number");
    }
    printf("\n");    
    return 0;
}