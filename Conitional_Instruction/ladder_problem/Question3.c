#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the percentage of student:");
    scanf("%d",&num);
    if(num>=90)
    printf("Student has pass by A grade");
    else if(num>=80)
    printf("Student has pass by B grade");
    else if(num>=70)
    printf("Student has pass by C grade");
    else if(num>=60) 
    printf("Student has pass by D grade");
    else if(num>=50) 
    printf("Student has pass by E grade");
    else
    printf("Student has pass by F grade");
}