//find square and cube of number
#include<stdio.h>
#include<conio.h>

void main()
{
    int square=0, cube=0, num1;
    clrscr(); // Optional: clears previous output screen
    printf("Enter the number:");
    scanf("%d", &num1);
    
    square = num1 * num1;
    cube = num1 * num1 * num1;
    
    printf("Square is %d \n", square);
    printf("Cube is %d", cube);
    getch();
}
