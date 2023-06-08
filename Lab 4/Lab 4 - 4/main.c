#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
void strcat(char [], char []);
int main()
{
    /*4) C Program to take firstName and lastName from user, then displays fullName.*/
    char arr1[SIZE], arr2[SIZE], term;
    int i;

    //first string
    printf("Please Enter your first Name: ");
    for(i = 0; i <= SIZE && term != 13; i++){

        term = (arr1[i]=getch());

         if(term == 13){
            arr1[i] = '\0';
        }

    }

    term = 0;

    //second string
    printf("\nPlease Enter your last Name: ");
    for(i = 0; i <= SIZE && term != 13; i++){

        term = (arr2[i]=getch());
         if(term == 13){
            arr2[i] = '\0';
        }
    }
    //Strcat func
    strcat(arr1, arr2);

    //Print the full name
    printf("\nYour fullname is: ");
    for(i = 0; i <= SIZE && arr1[i] != '\0'; i++){

        printf("%c", arr1[i]);

    }

    return 0;
}

