#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <dos.h>
#include <dir.h>

void option1(int x, char y, int *exit){
    if(x != 2 && x != 3){
    //change color for other options
    gotoxy(50,8);
    SetColor(2);
    printf(" 2- New\n\n");
    gotoxy(50,13);
    printf(" 3- To exit\n\n");

    }

    gotoxy(50,3);
    SetColor(1);
    printf(" 1- Display\n\n");
     if(y == 13){
        SetColor(2);
        system("cls");
        printf("It's the display choice\n\n");
        printf("\npress 'Esc' to get back!");
        if((y = getch()) != 27){
                *exit = 1;
                }
    }


}
void option2(int x, char y, int *exit){

    //change color for other options
    if(x != 1 && x != 3){
    gotoxy(50,3);
    SetColor(2);
    printf(" 1- Display\n\n");
    gotoxy(50,13);
    printf(" 3- To exit\n\n");
    }

    gotoxy(50,8);
    SetColor(1);
    printf(" 2- New\n\n");
     if(y == 13){
        SetColor(2);
        system("cls");
        printf("It's the new choice\n\n");
        printf("\npress 'Esc' to get back!");
        if((y = getch()) != 27){
                *exit = 1;
                }

    }
}
void option3(int x){

    //change color for other options
    if(x != 1 && x != 2){
    gotoxy(50,3);
    SetColor(2);
    printf(" 1- Display\n\n");
    gotoxy(50,8);
    printf(" 2- New\n\n");
    }


    gotoxy(50,13);
    SetColor(1);
    printf(" 3- To exit\n\n");


}



