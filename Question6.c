// 6. Program to check whether a year is a leap year or not. Using switch statement
#include <stdio.h>
int main()
{
  int x;
   printf("Enter a year\n");
   scanf("%d",&x);
  switch (x % 100==0)
  {
  case 1:
    switch (x % 400==0)
    {
    case 1:
      printf("Leap Year\n");break;
    case 0:
      printf("Non Leap Year\n");break;
    }
    break;
  case 0:
             switch (x % 4==0)
    {
           case 1:
            printf("Leap Year\n"); break;
               case 0:
              printf("Non Leap Year\n"); break;
    }
                         break;
  }

  /* int x,n=1;

   switch (n)
   {
   case 1:
     printf("Enter a year");
   scanf("%d",&x);
   if (x%400==0)
   {
     printf("It is a century year");
   }
   else if (x%4==0)
   {
      printf("it's a leap year");
   }
   else
   printf("Not a leap year");

       break;}*/

  return 0;
}
