// 9. Swap two numbers (without temp)?
// 8. Swap two numbers (with temp)
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b ;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    a,b=a,b;
    
    printf("%d\n",a);
    printf("%d",b);
getch();
}