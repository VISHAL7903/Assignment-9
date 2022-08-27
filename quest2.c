#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
    {

        
    printf("1.Addition\n");
      printf("2.Subtraction\n");
        printf("3.Multiplication\n");
          printf("4.Division\n");
            printf("5.Exit\n");

     printf("\nEnter the number\n");
     scanf("%d",&x);
     switch(x)
     {
         case 1:
         printf("Enter two number");
         scanf("%d%d",&a,&b);
         printf("Addition is %d",a+b);
         break;
         case 2:
         printf("Enter two number");
         scanf("%d%d",&a,&b);
         printf("Subtraction is %d",a-b);
         break;
         case 3:
         printf("Enter two number");
         scanf("%d%d",&a,&b);
         printf("Multiplication is %d",a*b);
         break;
         case 4:
         printf("Enter two number");
         scanf("%d%d",&a,&b);
         printf("Division is %d",a/b);
         break;
         case 5:
         exit(0);
         break;
         default :
         printf("invalid number");
         break;
     }
     printf("\n");
    }
    return 0;

}