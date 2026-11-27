<<<<<<< HEAD
// 9. Swap two numbers (without temp)?
// 8. Swap two numbers (with temp)
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b ;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    a,b=a,b;
    
    printf("%d\n",a);
    printf("%d",b);
getch();
}
=======
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
>>>>>>> aa8f86369a6a46f22231e55394a12b1746edeaad
