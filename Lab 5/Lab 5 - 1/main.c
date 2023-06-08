#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct Emp_Struct{
    int id, salary, bonus, deduct;
    char name[20];

}Emp_Struct;

int main()
{
    /*1- C Program to take single Employee's information(ID, Name, Salary, Bonus, Deduction)
    ,and display his code, name along with his net salary. (Emp_Struct)*/

    Emp_Struct emp1;
    //input
    int i,term;
        printf("Please enter your ID: ");
        scanf("%d", &emp1.id);
        printf("Please enter your Name: ");
        for(i = 0; i <= 20 && term != 13; i++){
            term = (emp1.name[i]=getche());

             if(term == 13){
                emp1.name[i] = '\0';
                }
        }
        printf("\nPlease enter your Salary: ");
        scanf("%d", &emp1.salary);
        printf("Please enter your Bonus: ");
        scanf("%d", &emp1.bonus);
        printf("Please enter your salary deduction: ");
        scanf("%d", &emp1.deduct);

    //Print
    printf("\n===================================\n");
    printf("Emp ID: %d\n", emp1.id);
    printf("Emp Name: %s\n", emp1.name);
    printf("Emp net salary %d\n", emp1.salary + emp1.bonus - emp1.deduct);
    return 0;
}
