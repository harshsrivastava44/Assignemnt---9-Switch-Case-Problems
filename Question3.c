/*3. Write a program which takes the day number of a week and displays a
unique greeting message for the day.
*/
#include<stdio.h>
int main()
{
    int n;
     while (n)
   {
    
  
    printf("Enter Day Number of a week\n");
    scanf("%d",&n);
  
   
    switch (n)
    {
    case 1:
    printf("Hello Today is Monday\n");
    printf("Have a good day\n");
        break;
    case 2:
    printf("Hello Today is Tuesday\n");
    printf("The day of Lord Hanuman\n");
        break;
        case  3:
    printf("Hello Today is wednesday\n");
    printf("Today is doubt class at 9:00pm");
        break;
        case 4:
    printf("Hello Today is Thursday\n");
    printf("College time\n");
        break;
        case 5:
    printf("Hello Today is Friday\n");
    printf("Fun time with friends\n");
        break;
        case 6:
    printf("Hello Today is Saturday\n");
    printf("Movie time\n");
        break;
        case 7:
    printf("Hello Today is Sunday\n");
    printf("Holiday\n");
        break;
     default:
     printf("Invalid Choice");
     break;   
    
    }
    if (n>7)
    {
        break;
    }
    
    }
    return 0;
}