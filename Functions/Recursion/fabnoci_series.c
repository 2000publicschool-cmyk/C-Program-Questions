#include <stdio.h>
#include <conio.h>

void fab(int n)
{
    int a = 0, b = 1, c;

    if (n <= 0)
    {
        printf("Enter a positive number.\n");
        return;
    }

    printf("Fibonacci series: ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    fab(n);
    return 0;
}
