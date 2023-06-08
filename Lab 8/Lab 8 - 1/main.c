#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*1. int* IncrementArray()
	- try to return fixed Array first, see what happened.
	- then rerun dynamically allocated array.*/
	int size;
	printf("Enter the array size: ");
	scanf("%d", &size);

	//staticarr(size); //Error
    dynamicarr(size);


    return 0;
}

int staticarr(int size){
    //int arr[];
    int arr[size];
    int *arr_ptr;
    arr_ptr = arr[0];
    int i;
    for(i = 0; i <= size; i++){
        printf("Enter the array number %d :", i);
        scanf("%d", &arr_ptr[i]);

    }
    return 0;
}

int dynamicarr(int size){
    int *arr_ptr;
    arr_ptr = (int*) malloc(size* sizeof(int));
    int i;
    for(i = 0; i <= size; i++){
        printf("Enter the array number %d :", i);
        scanf("%d", &arr_ptr[i]);

    }
    return 0;
}
