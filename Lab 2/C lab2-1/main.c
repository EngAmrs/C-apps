#include <stdio.h>
#include <stdlib.h>

int main()
{
/*1- Write a C program to check whether a given number is positive or negative or zero*/
int x;
printf("Please Enter a number: ");
scanf("%d", &x);

if(x > 0)
    printf("It's Positive number!");

else if(x < 0)
    printf("It's negative number!");

else
    printf("It's a zero!");


    return 0;
}
