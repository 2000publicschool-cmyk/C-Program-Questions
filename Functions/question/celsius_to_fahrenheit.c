//°F = (°C × 9/5) + 32
#include<stdio.h>
#include<conio.h>
float convert_celsius_to_fahrenheit(float tem){
	float f;
	f=(tem*9/5) +32;
	return f;
}
int main(){
	float tem,fr;
	printf("Enter the temprature in celsius:");
	scanf("%f",&tem);
	fr=convert_celsius_to_fahrenheit(tem);
	printf("converted temprature is %f",fr);
	}