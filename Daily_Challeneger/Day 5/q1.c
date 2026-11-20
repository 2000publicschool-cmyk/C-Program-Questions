// 8. Swap two numbers (with temp)
#include<stdio.h>
#include<conio.h>
void main()
{
    int t,a,b ;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    t=a;
    a=b;
    b=t;
    printf("%d\n",a);
    printf("%d",b);
getch();
}