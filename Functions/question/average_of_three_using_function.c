#include <stdio.h>
#include<conio.h>

float average(float x, float y, float z) {
    float avg = (x + y + z) / 3.0f;
    return avg;
}

int main() {
    float n1,n2,n3;
    printf("Enter the first number:");
    scanf("%f",&n1);
    printf("Enter the second number:");
    scanf("%f",&n2);
    printf("Enter the third number:");
    scanf("%f",&n3);
    float c = average(n1, n2, n3);
    printf("%.2f\n", c);
    return 0;
}
