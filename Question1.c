/*1. Write a program which takes the month number as an input and display
number of days in that month.
*/
#include <stdio.h>
int main()
{
    int Month, a = 30, b = 31, c = 28;
    printf("Enter the month Number: ");
    scanf("%d", &Month);
    switch (Month)
    {
    case 1:
        printf("%d month is january and number of days are %d", Month, b);
        break;
    case 2:
        printf("%d month is February and number of days are %d", Month, c);
        break;
    case 3:
        printf("%d month is March and number of days are %d", Month, b);
        break;
    case 4:
        printf("%d month is April and number of days are %d", Month, a);
        break;
    case 5:
        printf("%d month is May and number of days are %d", Month, b);
        break;
    case 6:
        printf("%d month is June and number of days are %d", Month, a);
        break;
    case 7:
        printf("%d month is July and number of days are %d", Month, b);
        break;
    case 8:
        printf("%d month is August and number of days are %d", Month, b);
        break;
    case 9:
    printf("%d month is September and number of days are %d",Month,a);
    break;
    case 10 :
    printf("%d month is october and number of days are %d",Month,b);
    break;
    case 11 :
    printf("%d month is November and number of days are %d",Month,a);
    break;
    case 12 :
    printf("%d month is December and number of days are %d",Month,b);
    break;
default:
printf("invalid Choice");
    
    }
    printf("\n");
    return 0;
}