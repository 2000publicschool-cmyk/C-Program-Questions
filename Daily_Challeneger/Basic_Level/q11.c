//calculate simple interest
#include<stdio.h>
#include<conio.h>
void main()
{
    float SI=0, p, r, t;
    clrscr();
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the interest rate: ");
    scanf("%f", &r);
    printf("Enter the time in years: ");
    scanf("%f", &t);
    SI = (p * r * t) / 100;
    printf("Simple interest is %.2f", SI);
    getch();
}
