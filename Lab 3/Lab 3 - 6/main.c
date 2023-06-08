#include <stdio.h>
#include <stdlib.h>

void upperr(char);

int main()
{
    /*6- Write C Function that converts the any letter from lowercase to uppercase.*/

    char z;
    printf("Please a character: ");
    scanf("%c", &z);
    upperr(z);


    return 0;
}

void upperr(char x){

    if(x >= 'a' && x <= 'z'){

    x -= 32;
    printf("Upper: %c" , x);

}else{

    printf("Original: %c" , x);
}

}
