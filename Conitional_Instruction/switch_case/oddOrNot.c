#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2)
    {
        case 1: printf("The number is odd");
        break;
        default: printf("The number is not odd");
    }
getch();
}