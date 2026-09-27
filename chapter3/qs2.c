/*Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. */


#include<stdio.h>
#include<conio.h>
void main()
{
    float math,cs,pom;
    float obtMarks,over_all_present,mathPersent,csPersent,pomPersent;
    printf("Enter the number of math cs pom:");
    scanf("%f%f%f",&math,&cs,&pom);
    obtMarks=math+cs+pom;
    over_all_present=(obtMarks*100)/300;
    mathPersent=(math*100)/100;
    csPersent=(cs*100)/100;
    pomPersent=(pom*100)/100;
    if(over_all_present>=40 && mathPersent>=30 && csPersent>=30 &&pomPersent>=30)
    printf("Student has pass...");
    else
    printf("Student has fail");
}