#include <stdio.h>
#include <stdlib.h>
int cube(int);
int main()
{
    /*7-Write a C Function that prints the cube of any number.*/

    int z;
    printf("Please enter a number: ");
    scanf("%d", &z);
    printf("The Cube of %d is %d", z, cube(z));

    return 0;
}

int cube(int x){
    int cubed = 1;
    int i;
    for(i = 0; i < 3; i++){

        cubed *= x;
    }
    return cubed;
}
