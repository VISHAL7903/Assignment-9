#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case 1:printf("%d = Odd Number",x+1);
        break;
        case 0:printf("%d = Odd Number",x);
        break;
        printf("%d = Even Number",x);
        break;

    }
    return 0;
}