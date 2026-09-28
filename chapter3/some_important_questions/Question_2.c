/*Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab               Tax         
2.5 – 5.0L                5%              
5.0L - 10.0L              20%             
Above 10.0L               30%          
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/

#include<stdio.h>
#include<conio.h>
void main()
{
    int income;
    printf("Enter the income amount:");
    scanf("%d",&income);
    if(income>250000 && income<500000){
        printf("Income of an employee is %d\n",income);
        printf("tax paid by an employee is %d", (income*5)/100);
    }
    else if(income>500000 && income<1000000){
        printf("Income of an employee is %d\n",income);
        printf("tax paid by an employee is %d", (income*20)/100);
    }
    else if(income>1000000){
        printf("Income of an employee is %d\n",income);
        printf("tax paid by an employee is %d", (income*30)/100);
    }
    else{
        printf("Note that there is no tax below 2.5L");
    }
    
}