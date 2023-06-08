#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Students_degrees{
        int sub_degree;
        int student_name[20];
        char subject [50];

}Students_degrees;


int main()
{
    /*3. C Program to calculate sum of student degrees, and average of each subject, asks the user for
        students and subject numbers. (Dynamic Allocation of 2D Array - Pointer to Pointer)*/
    int students_num,sub;
	printf("Please enter how many students that you have: ");
	scanf("%d", &students_num);

	//Create Students pointers;
    Students_degrees ** ptr = (Students_degrees **) malloc(students_num * sizeof(Students_degrees *));

    printf("Please enter how many subjects: ");
    scanf("%d" ,&sub);


    //Creating the number of subjects
    int i,j;
    for(i = 0; i < students_num; i++){

        ptr[i] = (Students_degrees*) malloc(sub * sizeof(Students_degrees));

    }

    //Inserting the subject name
    for(j = 0; j < sub; j++){
            printf("\nplease enter the subject %d name: ", j+1);
            scanf("%s", ptr[0][j].subject);
        }

    //Inserting the subject degree
    for(i = 0; i < students_num; i++){
        for(j = 0; j < sub; j++){
            printf("\nStudent %d,\n", i+1);
            printf("Subject %s:\n", ptr[0][j].subject);
            printf("please enter the student name: ");
            scanf("%s", ptr[i][j].student_name);
            printf("please enter the student degree: ");
            scanf("%d", &ptr[i][j].sub_degree);
        }
    }

    //Sum of student degrees
    int sum = 0;
    for(i = 0; i < students_num; i++){
        for(j = 0; j < sub; j++){
            sum += ptr[i][j].sub_degree;
        }
        printf("\n\nSum of the student %d degrees is : %d\n", i+1, sum);
        sum = 0;
    }

    printf("\n=============================================================");
    //Average of each subject
    float avg = 0;
    for(i = 0; i < sub; i++){
        for(j = 0; j< students_num; j++){

            avg += ptr[j][i].sub_degree;
        }
        avg = avg /(float)sub;
        printf("\n\nAvg of the subject %s is : %f\n", ptr[0][i].subject, avg);
        avg = 0;
    }

    return 0;
}
