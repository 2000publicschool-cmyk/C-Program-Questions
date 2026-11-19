
//Give opposite result
#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 0: printf("The number is even");
        break;
        default: printf("The number is not even");
    }
getch();
}


//correct code is
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     switch(n%2==0)
//     {
//         case 1: printf("The number is even");
//         break;
//         case 0: printf("The number is not even");
//     }
// getch();
// }



// #include<stdio.h>
// #include<conio.h>
// void main()
// {
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     switch(n%2)
//     {
//         case 0: printf("The number is even");
//         break;
//         default: printf("The number is not even");
//     }
// getch();
// }