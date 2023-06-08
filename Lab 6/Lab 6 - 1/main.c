#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int main()
{
    /*1) Input and Output from Array using pointers:
        C Program that have an Array of integers, read array data from user, Ptr -> Arr, print that array using Ptr.
        (try to use "Array Notation while reading data" and "Pointer notation while printing data")*/
    int arr[SIZE];

    get_arr(arr);
    disply(&arr);

    return 0;
}

void get_arr(int arr[]){
    int i;
    for(i=0;i<SIZE;i++){
        printf("Please enter number %d: ", i);
        scanf("%d", &arr[i]);
        }
}

void disply(const int *p){
    int i;
    for(i=0;i<SIZE;i++){

         printf("arr: %d\n", *(p+i));
    }


}
