#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <dos.h>
#include <dir.h>
#include <string.h>

void gotoxy(int,int);
int main()
{
    int size = 250;
    char press;
    int x = 0;
    int counter = 0;
    char *ptr;
    ptr =  (char*) malloc(size* sizeof(char));
    do{
        press = getch();
        if(press == -32){

            press = getch();

            //Home
            if(press == 71){
                x = 0;
                gotoxy(x,0);

            //End
            }else if(press == 79){
                x = counter;
                gotoxy(x,0);
            //Left
            }else if(press == 75){
                if(x != 0){
                    x--;
                    gotoxy(x,0);
                }
            //Right
            }else if(press == 77){
                if(ptr[x] != '\0'){
                    x++;
                    gotoxy(x,0);
                }

            //delete
            }else if(press == 83)
                {
                    if(x != 0){
                    int i=0;
                    //x--;
                    for(i = x; i < counter+1; i++){
                    ptr[i]=ptr[i+1];
                    }
                    ptr[i]='\0';
                    //counter--;
                    system("cls");
                    printf("%s",ptr);
                    gotoxy(x,0);
                    }
                }
        //Backspace
        }else if(press == 8)
                {
                    if(x != 0){
                    printf("\b ");
                    int i=0;
                    x--;
                    for(i = x; i < counter-1; i++){
                    ptr[i]=ptr[i+1];
                    }
                    ptr[i]='\0';
                    counter--;
                    system("cls");
                    printf("%s",ptr);
                    gotoxy(x,0);
                    }

        }else
                {
                if(press != 13){
                printf("%c",press);
                ptr[x] =press;
                x++;
                counter++;
                ptr[counter]='\0';
                }
            }

    }while(press != 13);

        //After pressing Enter
            system("cls");
            printf("Output: ");
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
            printf("%s\n\n",ptr);
            SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

        return 0;
    }



//Extra
void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
