#include <stdio.h>
#include <stdlib.h>

int main()
{
 int monthnumber;

  printf("which month:");
  scanf("%d",&monthnumber);

    switch(monthnumber){
    case 4:
    case 6:
    case 9:
    case 11:printf("there are 20 days in the %dth month\n",monthnumber);
    break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:printf("there are 31 days in the month\n",monthnumber);
        break;
   case 2:printf("there are 28 or 29 days in the %dth month\n",monthnumber);
   break;
     default:printf("there is no %dth month\n",monthnumber);


    }






    return 0;
}
