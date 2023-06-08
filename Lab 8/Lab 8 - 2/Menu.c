#include <stdio.h>
#include <stdlib.h>


void menu(int x){
    gotoxy(50,0);
    printf("Option: %d", x);
    gotoxy(50,3);
    printf("Add Employee\n\n");
    gotoxy(50,8);
    printf("Display Employees\n\n");
    gotoxy(50,13);
    printf("Exit\n\n");

}
