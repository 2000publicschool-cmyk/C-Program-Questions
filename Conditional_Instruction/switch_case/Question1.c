#include<stdio.h>
#include<conio.h>
void main()
{
    char ch;
    printf("Please Enter any vowel character:");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'a':printf("You have entered 'a'");
        break;
        case 'e':printf("You have entered 'e'");
        break;
        case 'i':printf("You have entered 'i'");
        break;
        case 'o':printf("You have entered 'o'");
        break;
        case 'u':printf("You have entered 'u'");
        break;
        default:printf("You enter worng character");
    }
}