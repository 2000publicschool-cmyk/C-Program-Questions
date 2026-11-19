#include<stdio.h>
#include<conio.h>
void main()
{
    int income;
    float tax=0;
    printf("Enter the income:");
    scanf("%d",&income);
    if (income<250000){
        tax=0;
    }
    else if(income>250000 && income<=500000){
        tax=0.05*(income - 250000);
    }
    else if(income>500000 && income<100000){
        tax=0.05*(income - 250000) + 0.2*(income);
    }
}