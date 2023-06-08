#include <stdio.h>
#include <stdlib.h>

int len(char []);
int main()
{
    /*7) C Program to Find the Length of a String without Using strlen()*/
    char name[50] = "Amrr";

    printf("Length is: %d", len(name));

    return 0;
}
