// 13. Check positive, negative, or zero
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n>0)
    printf("Enter number is positive...");
    if(n<0)
    printf("Enter number is negative...");
    if(n==0)
    printf("Enter number is zero...");
getch();
}