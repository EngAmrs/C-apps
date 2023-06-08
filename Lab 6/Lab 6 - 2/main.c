#include <stdio.h>
#include <stdlib.h>


int power(int, int);
int main()
{

    /*2) Recursive: Power.*/
    int x = 5, i = 2;
    printf("%d ^ %d = %d ", x,i, power(x, i));

    return 0;
}


//Recursive power function
int power(int base, int p){
    if(p != 0){

            return (base * power(base, p - 1));
    }else{

        return 1;

    }
}
