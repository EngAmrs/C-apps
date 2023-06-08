#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void menu(char);
void gotoxy(int,int);
int main()
{

    /*2- Simple Menu with 3 choices.*/

    char choice,i;
    menu(choice);

    do{
        choice = getch();
        switch(choice){
            case 27: system("cls");
                    menu(choice);

            break;
            case '1': system("cls");
                    printf("It's the display choice\n\n");
            break;

            case '2': system("cls");
                    printf("It's the new choice\n\n");
            break;
            case '3':
            break;
            default: printf("");
            }
        }while(choice != '3' || choice != '3');

        printf("\nBye Bye !\n");
    return 0;
}

void menu(char x){
    gotoxy(50,3);
    printf(" 1- Display\n\n");
    gotoxy(50,8);
    printf(" 2- new\n\n");
    gotoxy(50,13);
    printf(" 3- to exit\n\n");

}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
