#include <stdio.h>
#include <stdlib.h>

int main()
{

/*2- Write a C program to check whether a given number is even or odd*/
int x;
printf("Please Enter a number: ");
scanf("%d", &x);

if(x % 2 == 0)
    printf("It's an even number");

else
    printf("It's an odd number");

    return 0;
}
