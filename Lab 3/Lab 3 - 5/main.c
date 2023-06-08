#include <stdio.h>
#include <stdlib.h>

void alpha(char);
int main()
{

    /*5- Write a C Function that takes one character and checks if it alphabet or not.*/
    char z;
    printf("Please a character: ");
    scanf("%c", &z);
    alpha(z);
    return 0;
}

void alpha(char x){

    if(x >= 'A' && x <= 'Z' || x >= 'a' && x <= 'z'){

        printf("It's an alphabet input");

    }else{

        printf("It's not an alphabet input");
    }


}
