// 6. Find largest of two numbers
#include <stdio.h>
#include <conio.h>
int main() {
    int num1, num2;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("%d is the greater number.\n", num1);
    } else if (num2 > num1) {
        printf("%d is the greater number.\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
