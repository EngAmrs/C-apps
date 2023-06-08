#include <stdio.h>
#include <stdlib.h>
void largest(int,int,int);
int main()
{
    /*4- Write a function takes 3 numbers as parameter, and returns the largest one among them... write a program to test it.*/
    int first,second,third;
    printf("Please write 3 numbers in row: ");
    scanf("%d %d %d", &first, &second, &third);
    largest(first,second,third);

    return 0;
}

void largest(int x,int y,int z){


if(x > y && x > z){

    printf("%d is the largest number", x);

} else if(y > x && y > z){

    printf("%d is the largest number", y);

}else
    printf("%d is the largest number", z);


}

