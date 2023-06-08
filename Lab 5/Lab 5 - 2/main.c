#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
typedef struct EmpArr_of_Struct{
    int id, salary, bonus, deduct;
    char name[20];

}EmpArr_of_Struct;

int main()
{
    /*2- C Program to take information of Array of 5 Employees, then display their data. (EmpArr_of_Struct)*/

    //input
    EmpArr_of_Struct e[SIZE];
    int i,term,j;
    for(i = 0; i < SIZE; i++){

        printf("\nEmployee %d: \n\n", i+1);
        printf("Please enter your ID: ");
        scanf("%d", &e[i].id);
        printf("Please enter your Name: ");
        for(j = 0; j <= 20 && term != 13; j++){
            term = (e[i].name[j]=getche());

             if(term == 13){
                e[i].name[j] = '\0';
                }
        }
        term = 0;
        printf("\nPlease enter your Salary: ");
        scanf("%d", &e[i].salary);
        printf("Please enter your Bonus: ");
        scanf("%d", &e[i].bonus);
        printf("Please enter your salary deduction: ");
        scanf("%d", &e[i].deduct);
    }

    printf("\nDisplay\n");
    //Print
    for(i = 0; i < SIZE; i++){

    printf("\nEmployee %d: \n\n", i+1);
    printf("Emp ID: %d\n", e[i].id);
    printf("Emp Name: %s\n", e[i].name);
    printf("Emp net salary %d\n", e[i].salary + e[i].bonus - e[i].deduct);
    printf("\n===================================\n");
    }
    return 0;
}
