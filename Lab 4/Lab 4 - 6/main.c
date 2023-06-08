#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void strcpy(char [], char []);
int main()
{
    /*6) C Program to Copy String Without Using strcpy()*/
    char arr1[SIZE + 50], arr2[SIZE], term;
    int i;

    //first string
    printf("Please Enter first string: ");
    for(i = 0; i <= SIZE && term != 13; i++){

        term = (arr1[i]=getche());

         if(term == 13){
            arr1[i] = '\0';
        }

    }

    term = 0;

    //second string
    printf("\nPlease Enter second string: ");
    for(i = 0; i <= SIZE && term != 13; i++){

        term = (arr2[i]=getche());
         if(term == 13){
            arr2[i] = '\0';
        }
    }
    //Strcpy func (mine)
    strcpy(arr1, arr2);

    //Print the first string
    printf("\nYour first string is: ");
    for(i = 0; i <= SIZE && arr1[i] != '\0'; i++){

        printf("%c", arr1[i]);

    }

    return 0;
}
