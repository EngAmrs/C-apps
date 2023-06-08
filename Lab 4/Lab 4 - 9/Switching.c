#include <stdio.h>
#include <stdlib.h>
#define SIZE 4

//switching between options
void swiching(int keys, char option, int options_size, int *exit){

//Menu func
    menu(option);

    do{
        //Switching between options
        if((keys = getch()) == 80){

            option++;
        }else if(keys == 72){

            option--;
        }
        if(option == 0)
            option =  options_size;
        if(option == SIZE)
            option = 1;

        system("cls");
        gotoxy(50,0);
        printf("Option: %d", option);

       //options
        switch(option){
            case 1:option1(option,keys, &exit);

            break;
            case 2:option2(option,keys);

            break;
            case 3:option3(option);
                    if(keys == 13){
                        *exit = 1;
                        system("cls");
                        SetColor(5);
                        printf("Bye Bye !\n");
                    }
            break;
        }

        SetColor(2);

    }while(*exit == 0);

}
