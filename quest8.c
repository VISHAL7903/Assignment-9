#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d",&x);
    switch(x>=0)
    {
        case 1:printf("%d = Positive Number \n",x);
             printf("%d = Negative NUmber ",-x);
        break;
        case 0:printf("%d = Negative NUmber \n",x);
               printf("%d = Positive  NUmber \n",-x);
        break;

    }
    return 0;
}