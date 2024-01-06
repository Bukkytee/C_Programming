#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("POINTER ASSIGNMENT\n");

    int var1;

    int var2[10];

    printf("Address of var1 variable : %x \n", &var1);

    printf("Address of var2 variable : %x \n", &var2);

    //SINGLE DIMENSIONAL ARRAY POINTER

    printf("\n SINGLE DIMENSIONAL ARRAY POINTER \n");

    int scores[] = {30, 54, 60, 80, 93};

    int i;

    for(i = 0; i < 5; i++){

        printf("Scores of student[%d] = %d \n", i, scores[i]);
    }

    //MULTI-DIMENSIONAL ARRAY OF POINTERS



    return 0;
}
