/*2. Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    while (1)
    {
    int x, a, b, c;
    printf("Enter Your Choice :\n");

    printf("\n1.Addition");
    printf("\n2.Subtraction");
    printf("\n3.Multiplication");
    printf("\n4.Division");
    printf("\n5.exit\n");
    scanf("%d", &x);


        switch (x)
        {
        case 1:
            printf("Enter two numbers :\n");
            scanf("%d %d", &a, &b);
            c = a + b;
            printf("The Sum of the number is %d\n", c);
            break;
        case 2:
            printf("Enter two numbers \n");
            scanf("%d %d", &a, &b);
            c = a - b;
            printf("The difference  is %d\n", c);
            break;
        case 3:
            printf("Enter two numbers \n");
            scanf("%d %d", &a, &b);
            c = a * b;
            printf("The product is %d\n", c);
            break;
        case 4:
            printf("Enter two numbers \n");
            scanf("%d %d", &a, &b);
            c = a / b;
            printf("the quotient is %d\n", c);
            break;
        case 5:
            exit(0);
        }
    }
    printf("\n");
    return 0;
}
