#include <stdio.h>
#include<stdlib.h>
int main()
{
     int week;
     while(1)
     {
    printf("Enter week number (1-7):\n");
    printf("Enter 8 Exit \n");
    scanf("%d", &week);
    switch(week)
    {
       case 1:
       printf("Monday \n");
       printf("Thank you");
      break;
    case 2:
     printf("Tuesday\n");
      printf("Thank you");
     break;
     case 3:
        printf("Wednesday \n");
         printf("Thank you");
        break;
     case 4:
     printf("Thursday \n");
      printf("Thank you");
     break;
    case 5:
      printf("Friday \n");
       printf("Thank you");
      break;
      case 6:
        printf("Saturday \n");
         printf("Thank you");
        break;
        case 7:
          printf("Sunday \n");
           printf("Thank you");
          break;
       case 8:
       exit(0);
        printf("Thank you");
       break;
      default:
       printf("Invalid Input! Please enter week number between 1-7.\n");
        printf("Thank you");
    }
    printf("\n");
     }
    return 0;
}