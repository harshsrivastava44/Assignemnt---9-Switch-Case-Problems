/*8. Program to convert a positive number into a negative number and negative
number into a positive number using a switch statement.
*/
#include<stdio.h>
int main()
{

    int x;
     printf("Enter a number\n");
   scanf("%d",&x);
   switch(x>0){
   case 1:
       printf("-%d",x);
       break;
   case 0:
    x=(-1)*(x);
       printf("+%d",x);
       break;
       break;
   }
     return 0;
}
