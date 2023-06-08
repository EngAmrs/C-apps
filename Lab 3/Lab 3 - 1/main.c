#include <stdio.h>
#include <stdlib.h>

int main()
{

    /*1- Receive numbers from the user, and exit when the sum exceeds 100.*/

    int x = 0, i = 1, sum = 0;
    printf("Enter number as much as you can (Notice: the max sum is 100)\n\n");
    while(sum <= 100){

        printf("Number %d :", i);
        scanf("%d", &x);
        sum = sum + x;
        i++;
    }

    printf("You reached the maximum!");


    return 0;
}
