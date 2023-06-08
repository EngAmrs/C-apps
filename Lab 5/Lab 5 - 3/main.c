#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

typedef struct EmpArr_of_Struct{
    int id, salary, bonus, deduct;
    char name[20];

}EmpArr_of_Struct;

int main()
{
    /*3- Employee with Functions (try to divide Ass#2 into 2 functions):
	struct Employee AddNewEmployee(); void DisplayEmployee(struct Employee); */
    static int counter = 0;
    EmpArr_of_Struct e[SIZE];
    AddNewEmployee(&e[counter]);
    counter++;
    AddNewEmployee(&e[counter]);
    counter++;

    display_emps(e,counter);
    return 0;
}

//Add Employees
void AddNewEmployee(EmpArr_of_Struct *e){

        int term,j;
        printf("Please enter the employee ID: ");
        scanf("%d", &e ->id);
        printf("Please enter the employee Name: ");

        //To Input full name with spaces
        for(j = 0; j <= 20 && term != 13; j++){
            term = (e->name[j]=getche());

             if(term == 13){
                e ->name[j] = '\0';
                }
        }
        term = 0;
        printf("\nPlease enter the employee Salary: ");
        scanf("%d", &e->salary);
        printf("Please enter the employee Bonus: ");
        scanf("%d", &e->bonus);
        printf("Please enter the employee salary deduction: ");
        scanf("%d", &e->deduct);
}

//Display all employees data
void display_emps(EmpArr_of_Struct e[SIZE], int counter){
    int i;
    for(i = 0; i < counter; i++){

    printf("\nEmployee %d: \n\n", i+1);
    printf("Emp ID: %d\n", e[i].id);
    printf("Emp Name: %s\n", e[i].name);
    printf("Emp net salary %d\n", e[i].salary + e[i].bonus - e[i].deduct);
    printf("\n===================================\n");
    }


}
