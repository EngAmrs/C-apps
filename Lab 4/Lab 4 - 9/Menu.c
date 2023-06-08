#include <stdio.h>
#include <stdlib.h>


void menu(int x){
    gotoxy(50,0);
    printf("Option: %d", x);
    gotoxy(50,3);
    printf(" 1- Display\n\n");
    gotoxy(50,8);
    printf(" 2- New\n\n");
    gotoxy(50,13);
    printf(" 3- To exit\n\n");

}
