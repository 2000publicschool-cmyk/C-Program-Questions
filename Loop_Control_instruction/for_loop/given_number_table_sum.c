#include <stdio.h>
#include <conio.h>

void main() {
    int N,val,sum=0;
    printf("Enter the number:");
    scanf("%d",&N);
    for(int i=1;i<=10;i++){
    	val=N*i;
    	sum=sum+val;
    	
    }
    printf("sum of all values %d",sum);
}