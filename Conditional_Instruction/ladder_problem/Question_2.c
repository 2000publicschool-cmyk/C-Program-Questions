/*Calculate income tax paid by an employee to the government as per the slabs 
mentioned below: 
Income Slab               Tax         
2.5 – 5.0L                5%              
5.0L - 10.0L              20%             
Above 10.0L               30%          
Note that there is no tax below 2.5L. Take income amount as an input from the user.*/


#include <stdio.h>
#include <conio.h>

int main()
{
    long int salary;
    float tax = 0;

    clrscr();

    printf("Enter the salary: ");
    scanf("%ld", &salary);

    if (salary <= 400000)
    {
        tax = 0;
    }
    else if (salary <= 800000)
    {
        tax = 0.05 * (salary - 400000);
    }
    else if (salary <= 1200000)
    {
        tax = 0.05 * (800000 - 400000)
            + 0.10 * (salary - 800000);
    }
    else if (salary <= 1600000)
    {
        tax = 0.05 * (800000 - 400000)
            + 0.10 * (1200000 - 800000)
            + 0.15 * (salary - 1200000);
    }
    else if (salary <= 2000000)
    {
        tax = 0.05 * (800000 - 400000)
            + 0.10 * (1200000 - 800000)
            + 0.15 * (1600000 - 1200000)
            + 0.20 * (salary - 1600000);
    }
    else if (salary <= 2400000)
    {
        tax = 0.05 * (800000 - 400000)
            + 0.10 * (1200000 - 800000)
            + 0.15 * (1600000 - 1200000)
            + 0.20 * (2000000 - 1600000)
            + 0.25 * (salary - 2000000);
    }
    else
    {
        tax = 0.05 * (800000 - 400000)
            + 0.10 * (1200000 - 800000)
            + 0.15 * (1600000 - 1200000)
            + 0.20 * (2000000 - 1600000)
            + 0.30 * (salary - 2400000);
    }

    printf("The total tax you need to pay is %.2f", tax);

    getch();
    return 0;
}
