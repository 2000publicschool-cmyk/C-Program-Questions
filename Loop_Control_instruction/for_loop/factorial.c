#include <stdio.h>
#include <conio.h>

void main() 
{
    int num, fact = 1;
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    
    printf("Factorial is %d", fact);
    getch();
}
