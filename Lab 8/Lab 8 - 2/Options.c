#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <dos.h>
#include <dir.h>
#define SIZE_E 20

//Employee data
typedef struct EmpArr_of_Struct{
    int id, salary, bonus, deduct;
    char name[20];

}EmpArr_of_Struct;

//For going to the second element of array (Avoid overriding)
static int counter = 0;
EmpArr_of_Struct *arr_ptr;

//Options
void option1(int x, char y, int *exit){
    if(x != 2 && x != 3){
    //change color for other options
    gotoxy(50,8);
    SetColor(15);
    printf("Display Employees\n\n");
    gotoxy(50,13);
    printf("Exit\n\n");

    }

    gotoxy(50,3);
    SetColor(13);
    printf("Add Employee\n\n");
    //Go Inside Function
     if(y == 13){
        SetColor(15);
        system("cls");
        AddNewEmployee(1);
        printf("\n\npress 'Esc' to get back!");
        if((y = getch()) != 27){
                *exit = 1;
                }
    }


}
void option2(int x, char y, int *exit){
    //change color for other options
    if(x != 1 && x != 3){
    gotoxy(50,3);
    SetColor(15);
    printf("Add Employee\n\n");
    gotoxy(50,13);
    printf("Exit\n\n");
    }

    gotoxy(50,8);
    SetColor(13);
    printf("Display Employees\n\n");
    //Go Inside Function
     if(y == 13){
        SetColor(15);
        system("cls");
        display_emps();
        printf("\n\npress 'Esc' to get back!");
        if((y = getch()) != 27){
                *exit = 1;
            }

    }
}
void option3(int x){

    //change color for other options
    if(x != 1 && x != 2){
    gotoxy(50,3);
    SetColor(15);
    printf("Add Employee\n\n");
    gotoxy(50,8);
    printf("Display Employees\n\n");
    }


    gotoxy(50,13);
    SetColor(13);
    printf("Exit\n\n");


}



//Add employee details
void AddNewEmployee(){
        int size;
        printf("Enter the size of employees that you would like to add: ");
        scanf("%d", &size);
        arr_ptr = (EmpArr_of_Struct*) malloc(size* sizeof(EmpArr_of_Struct));
        int i;
        for(i = 0; i < size; i++){

            printf("\nEmployee %d :-\n", i+1);
            printf("\nPlease enter the employee ID: ");
            scanf("%d", &arr_ptr[i].id);
            printf("Please enter the employee Name: ");
            scanf("%s", arr_ptr[i].name);
            printf("Please enter the employee Salary: ");
            scanf("%d", &arr_ptr[i].salary);
            printf("Please enter the employee Bonus: ");
            scanf("%d", &arr_ptr[i].bonus);
            printf("Please enter the employee salary deduction: ");
            scanf("%d", &arr_ptr[i].deduct);
            counter++;
        }
}


//Show all employee details
void display_emps(){
    int i;
    for(i = 0; i < counter; i++){

    printf("\nEmployee %d: \n\n", i+1);
    printf("Emp ID: %d\n", arr_ptr[i].id);
    printf("Emp Name: %s\n", arr_ptr[i].name);
    printf("Emp net salary %d\n", arr_ptr[i].salary + arr_ptr[i].bonus - arr_ptr[i].deduct);
    printf("\n===================================\n");
    }
}



