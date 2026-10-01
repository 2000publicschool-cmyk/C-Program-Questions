#include<stdio.h>
#include<conio.h>
void main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    if(year%4==0)
    printf("Enter year is leap");
    else
    printf("Enter year is not leap");
   
getch();
}