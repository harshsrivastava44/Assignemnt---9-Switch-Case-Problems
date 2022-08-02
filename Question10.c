//10. C program to find all roots of a quadratic equation using switch case
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,d;
    int k;
    printf("\n Enter the value A :");
    scanf("%f",&a);
     printf("\n Enter the value B :");
    scanf("%f",&b);
     printf("\n Enter the value C :");
    scanf("%f",&c);
    if (a!=0)
    {
       d=b*b-4*a*c;
       if (d<0)
       k=1;
       if(d==0)
       k=2;
       if(d>0)
       k=3;
       switch (k)
       {
       case 1:printf("\n RESULT \n Roots are imaginary number.\n");
       printf("Roots of the qurdratic equation are ");
       printf("\nRoot-1=%0.2f+(%0.2f)",-b/2*a,sqrt(-d)/(2*a));
       printf("\n Root-2=%0.2f+(%0.2f)",-b/2*a,-sqrt(-d)/(2*a));
        break;
       case 2:
       printf("\n RESULT \n Roots are Real number and equal.\n");
       root1=-b/2*a;
       printf("roots of the quadratic equation is\n Roots-1=Root-2=%.2f",root1);
        break;
        case 3:
        printf("\n RESULT \n Roots are Real number and unequal.\n");
        root1=(-b+sqrt(d))/2*a;
        root2=(-b-sqrt(d))/2*a;
        printf("Roots of the quadratic equatio are\n Root-1=%.2f,Root-2=%.2f",root1,root2);
        break;

       }

    }
    else
    printf("\n RESULT \n  Equation is Linear");
    return 0;
}
