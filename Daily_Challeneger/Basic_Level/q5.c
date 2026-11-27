// 5. Check even or odd

#include<stdio.h>
#include<conio.h>
void main()
{
    int n ;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n%2==0)
    printf("%d is Even Number",n);
    else
    printf("%d is Odd Number",n);

    getch();
}