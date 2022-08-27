#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    while(1)
    {
        printf("Chose the number\n");
        printf("1.Enter the number\n");
        printf("2.Enter the number\n");
        printf("3.Enter the number\n");
        printf("4.Exit\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            if(x==1)
            printf("Good");
            break;
            case 2:
            if(x==2)
            printf("Better");
            break;
            case 3:
            if(x==3)
            printf("Best");
            break;
            case 4:
            exit(0);
            default:
            printf("Invalid");
            break;
            
        }
       printf("\n");
    }
    return 0;
}