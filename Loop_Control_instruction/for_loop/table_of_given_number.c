#include <stdio.h>
#include <conio.h> // Only needed if you use getch() at the end

int main() {
    int n;
    
    printf("Enter the number N: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n * i);
    }
    
    return 0;
}
