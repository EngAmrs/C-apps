#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{
    /*1) Receive character by character and then place the string terminator upon pressing enter, then display the string.*/
    char arr[SIZE];
    int i = 0, terminator;
    printf("\nEnter characters: ");
    while(i <= SIZE && terminator != 13){

        terminator = (arr[i]=getche());
        if(arr[i] == ' ') {continue;}
        // 13 is the enter AScI
        if(terminator == 13){
            arr[i] = '\0';
        }
        i++;
    }

    //Printing
    printf("\nYour string is: ");
    for(i = 0; i <= SIZE && arr[i] != '\0'; i++){

        printf("%c", arr[i]);

    }

    return 0;
}
