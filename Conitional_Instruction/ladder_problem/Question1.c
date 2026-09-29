#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("Enter the percentage of student:");
    scanf("%d",&num);
    if(num>=60 && num<=100)
    printf("Student has pass by first division");
    else if(num>=50 && num<60)
    printf("Student has pass by second division");
    if(num>50 && num<33)
    printf("Student has pass by third division");
    else 
    printf("Student has fail");
}