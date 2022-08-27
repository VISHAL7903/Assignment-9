#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x;
    while(1)
    {
         printf("\n1.Enter the month");
          printf("\n2.Enter the month");
           printf("\n3.Enter the month");
            printf("\n4.Enter the month");
             printf("\n5.Enter the month");
              printf("\n6.Enter the month");
               printf("\n7.Enter the month");
                printf("\n8.Enter the month");
                 printf("\n9.Enter the month");
                  printf("\n10.Enter the month");
                   printf("\n11.Enter the month");
                    printf("\n12.Enter the month");
                    printf("\n13.Enter the exit\n");


         printf("\nEnter the number");
       scanf("%d",&x);
        switch (x)
      {
        case 1:
         printf("%d  Month is January=31 days",x);
          scanf("%d",&x);
        break;
        case 2:
        printf("%d  Month is February=28/29 days",x);
        scanf("%d",&x);
        break;
        case 3:
         printf("%d  Month is March=31 days",x);
        scanf("%d",&x);
        break;
         case 4:
        printf("%d  Month is April=30 days",x);
        scanf("%d",&x);
       break;
       case 5:
         printf("%d  Month is May=31 days",x);
       scanf("%d",&x);
        break;
         case 6:
        printf("%d  Month is June=30 days",x);
        scanf("%d",&x);
        break;
        case 7:
       printf("%d  Month is July=31 days",x);
       scanf("%d",&x);
        break;
       case 8:
        printf("%d  Month is August=31 days",x);
        scanf("%d",&x);
       break;
       case 9:
       printf("%d  Month is September=30 days",x);
       scanf("%d",&x);
        break;
       case 10:
       printf("%d  Month is October=31 day",x);
       scanf("%d",&x);
        break;
        case 11:
       printf("%d  Month is November=30 days",x);
         scanf("%d",&x);
        break;
        case 12:
         printf("%d  Month is December=31 days",x);
       scanf("%d",&x);
       break;
       case 13:
       exit(0);
       default:
      printf("invalid number");
        break;
      }
    
    }
    
    return 0;
}