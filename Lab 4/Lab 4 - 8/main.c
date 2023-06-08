#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*8) C Program to Remove all Characters in a String Except Alphabet*/

    char name[50] = "Am2rrf21321d32";
    char temp[50];
    int i,j = 0;

    for(i = 0; i<= 50 && name[i] != '\0'; i++){

        if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z'){

                temp[j] = name[i];
                j++;
                temp[j] = '\0';
        }
    }

    for(i = 0; i <= 50; i++){

        name[i] = temp[i];

    }



    printf("\n");

    for(i = 0; i <= 50 && name[i] != '\0'; i++){

        printf("%c", name[i]);

    }

    return 0;
}
