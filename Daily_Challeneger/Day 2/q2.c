//4. Find sum of N natural numbers


#include<stdio.h>
#include<conio.h>

void main()
{
    int num, sum = 0;
    clrscr(); // Clears the previous output screen
    
    printf("Enter the number: ");
    scanf("%d", &num);
    
    // Loop to calculate the sum of N numbers
    for(int i = 1; i <= num; i++)
    {
        sum += i; // Adds each value of i to sum
    }
    
    // Print the final calculated sum
    printf("Sum of natural numbers up to %d = %d", num, sum);
    
    getch(); // Holds the output screen until a key is pressed
}
