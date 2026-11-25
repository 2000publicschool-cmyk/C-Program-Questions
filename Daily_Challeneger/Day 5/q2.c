// Swap two numbers without temp
#include <stdio.h>
#include <conio.h>

void main()
{
    int num1, num2;
    clrscr();

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("Num1 is %d \n", num1);
    printf("Num2 is %d", num2);

    getch();
}
