// 15. Find quotient and remainder
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,d,c=0,e=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the diviser:");
    scanf("%d",&d);
    c=n/d;
    printf("quotient is %d\n",c);
    e=n%d;
    printf("remender is %d",e);
getch();
}