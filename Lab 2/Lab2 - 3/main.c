#include <stdio.h>
#include <stdlib.h>

int main()
{
/*3- C Program to Find the Largest Number Among Three Numbers*/

int x,y,z;
printf("Please Enter 3 number in row: ");
scanf("%d %d %d", &x, &y, &z);

if(x > y && x > z){

    printf("%d It's the larger number", x);

} else if(y > x && y > z){

    printf("%d It's the larger number", y);

}else
    printf("%d It's the larger number", z);


    return 0;
}
