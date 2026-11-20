// 7. Find largest of three numbers
#include<stdio.h>
#include<conio.h>
void main()
{
    int a ,b, c;
    printf("Enter the three number:");
    scanf("%d %d %d",&a ,&b ,&c);
    if (a>b && a>c)
    printf("%d is greater number",a);
    if (b>a && b>c)
    printf("%d is greater number",b);
    if (c>a && c>b)
    printf("%d is greater number",c);
getch();
}