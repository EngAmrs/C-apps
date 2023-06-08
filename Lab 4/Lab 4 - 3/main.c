#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*3) C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.*/
    char chara = getche();

    if(chara == -32){

        printf("\nIT's an extend!\n");

        printf("It's value is: %d", chara = getche());

    }else{
        printf("\nIT's a normal!\n");
        printf("It's value is: %d", chara);
    }

    return 0;
}
