#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b,c;
    while(1)
    {
        printf("Enter your choice\n");
        printf("1.To check Isosceles Triangle\n ");
        printf("2.To check Right Angle Triangle\n ");
        printf("3.To check Equilateral Triangle\n ");
        printf("4.Exit \n");
        scanf("%d",&x);
        switch(x)
    {
         case 1:
         printf("enter the three side");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b || b==c || c==a)
        printf("Isosceles Triangle");
        else    
        printf("Not Isosceles Triangle ");
        break;
        case 2:
        printf("enter the three side");
        scanf("%d%d%d",&a,&b,&c);
        if(a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b)
        printf("Right Angle Triangle");
        else    
        printf("Not Right Angle Triangle ");
        break;
        case 3:
        printf("enter the three side");
        scanf("%d%d%d",&a,&b,&c);
        if((a==b) && (b==c))
        printf("Equilateral Triangle");
        else    
        printf("Not Equilateral Triangle ");
        break;
        default:
        printf("Invalid Number");
        break;
        case 4:
        exit(0);
    }
        printf("\n");
        
    }
    return 0;
    
    
}