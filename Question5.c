/*5. Convert the following if-else-if construct into switch case:
if(var == 1)
System.out.println("good");
else if(var == 2)
System.out.println("better");
else if(var == 3)
System.out.println("best");
else
System.out.println("invalid");
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
        int var;
        printf("Enter var value\n");
        scanf("%d", &var);
        switch (var)
        {
        case 1:
            printf("GOOD\n");
            break;
        case 2:
            printf("BETTER\n");
            break;
        case 3:
            printf("BEST\n");
            break;
            ;
        default:
            printf("Invalid choice");

            break;
        }
        if (var > 3)
            break;
    }
    return 0;
}