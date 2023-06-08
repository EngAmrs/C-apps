#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    /*5) C Program to Find the Frequency of Characters in a String*/

    char name[50] = "armrr";
    int i,j, counter = 0;
    for(i = 0; i <= 50 && name[i] != '\0'; i++){

        for(j = 0; j <= 50; j++){
            if(name[i] == name[j]){
                counter++;

            }

        }
        printf("Frequency of %c is %d\n", name[i], counter);
        counter = 0;
    }

    return 0;
}
