#include <stdio.h>
#include <stdlib.h>
int main()
{
   int x;
   int y;
   printf("please enter the first number") ;
   scanf("%d",&x);

   printf("please enter the second number");
   scanf("%d",&y);

   printf("\n the subtraction result is %d", x-y);
   printf("\n the addition result is %d", x+y);
   printf("\n the multiplication result is %d", x*y);
   printf("\n the devision result is %d", x/y);
   printf("\n the devision reminder is %d", x%y);

    return 0;
}
