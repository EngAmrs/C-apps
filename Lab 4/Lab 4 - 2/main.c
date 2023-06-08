#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1) C Program to swap 2 integer values. (Swap function, calling by address)*/
    int x = 5, y = 6;
    swap(&x,&y);

    return 0;
}


void swap(int *x, int *y){

    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    printf("X= %d and Y= %d", *x,*y);
}
