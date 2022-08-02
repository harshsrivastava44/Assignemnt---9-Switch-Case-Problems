/*4. Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an
isosceles triangle or not
b. Check whether a given set of three numbers are lengths of sides of
a right angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle
or not
d. Exit
*/
#include <stdio.h>
#include <stdlib.h>
void sides();
int main()
{
    while (1)
    {
        int x, a, b, c;
        printf("Enter Your Choice :\n");

        printf("\n1.Isosceles Triangle");
        printf("\n2.Right angled triangle");
        printf("\n3.Equilateral triangle");
        printf("\n4.exit\n");
        scanf("%d", &x);
        void sides()
        {
            printf("Enter the three sides\n");
            scanf("%d%d%d", &a, &b, &c);
        }
        switch (x)
        {
        case 1:
            sides();
            if (a == b || b == c || c == a)
            {
                printf("Isosceles triangle\n");
            }
            else
                printf("Not an isosceles triangle\n");
            break;
        case 2:
            sides();
            if (a * a == b * b + c * c || b * b == c * c + a * a || c * c == a * a + b * b)
            {
                printf("right angled triangle \n");
            }
            else
                 printf("Not an Right angled triangle\n");
            break;
        case 3:
            sides();
            if (a == b && b == c)
            {
                printf("Isosceles triangle");
            }
            else
                 printf("Not an Equilateral triangle\n");
            break;
        case 4:
            exit(0);

            }


    }
    return 0;
}
