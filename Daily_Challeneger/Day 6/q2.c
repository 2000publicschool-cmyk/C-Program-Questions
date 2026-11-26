#include<stdio.h>
#include<conio.h>

void main()
{
    float f = 0, c;
    clrscr();
    printf("Enter the temperature in celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("Temperature in fahrenheit is %.2f", f);
    getch();
}
