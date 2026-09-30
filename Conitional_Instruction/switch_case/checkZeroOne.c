#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    switch(num)
    {
        case (0):printf("Enter number is zero");
        break;
        case (1):printf("Enter number is one");
        break;
        default:printf("Invalid input");
    }
// getch();
}