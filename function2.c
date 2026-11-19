#include<stdio.h>
#include<conio.h>
float force_of_attrection (float m){
	float f;
	f=m*9.8;
	return f;
}
int main(){
	float m,f;
	printf("Enter mass in kg:");
	scanf("%f",&m);
	f=force_of_attrection(m);
	printf("converted temprature is %f",f);
	}