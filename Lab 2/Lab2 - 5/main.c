#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*5-Write a program to make a simple calculator using switch-case. The calculator takes
the operation (+ or – or * or /) and takes the two input arguments and print the results*/

int x,y;
char sim;
int result = 0;
printf("Please enter 2 numbers between them an operator: ");
scanf("%d %c %d", &x, &sim, &y);

switch(sim){
    case '+': result = x + y;
            printf("Result = %d", result);
    break;

    case '-': result = x - y;
            printf("Result = %d", result);
    break;

    case '*': result = x * y;
            printf("Result = %d", result);
    break;

    case '/':
            printf("Result = %f", (float)x / y);
    break;

    default: printf("Wrong input!");
}

    return 0;

}
