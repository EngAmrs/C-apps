#define SIZE 100
void strcat(char arr1[], char arr2[]){
    int i,j;
    for( i = 0; i <= SIZE; i++){

       if(arr1[i] == '\0'){

            for(j = 0; j <= SIZE;j++){
                arr1[i] = ' ';
                 arr1[i+j+1] = arr2[j];
            }
             break;
       }
    }
}
