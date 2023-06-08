#include <stdio.h>
#include <stdlib.h>


int main(){
    int size;
    int * arr_ptr;
    printf("Enter any size: ");
    scanf("%d", &size);

    arr_ptr = (int*) malloc(size* sizeof(int));


    get_arr(*arr_ptr, size);
    disply(*arr_ptr, size);

    return 0;
}

void get_arr(int arr[], int size){
    int i;
    for(i=0;i<size;i++){
        printf("Please enter number %d: ", i+1);
        scanf("%d", &arr[i]);
        }
}

void disply(const int *p, int size){
    int i;
    for(i=0;i<size;i++){

         printf("arr: %d\n", *(p+i));
}

}
