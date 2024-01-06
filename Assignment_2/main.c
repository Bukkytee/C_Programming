#include <stdio.h>
#include <stdlib.h>

int main()
{
    //FOR LOOPS

    printf("\t FOR LOOP STATEMENTS \n\n");

    printf("The numbers from 1 to 10 are : \n");

    int a;

    for(a = 1; a <= 10; a = a + 1){

        printf("%d \n\n", a);
    }

    //WHILE LOOPS

    printf("\t\n WHILE LOOP STATEMENTS \n");

    int x = 10;

    int y = 0;

    while(x > y){

        printf("\n x = %d , y = %d \n", x,y);

        x--;

        y++;
    }

    //DO WHILE LOOPS

    printf("\t\n DO WHILE LOOP STATEMENTS \n");

    int n = 0;

    do{

        printf("\n n = %d \n", n);

        n++;
    }
    while(n < 10);

    printf("\nThe maximum value of this loop is %d \n", n);


    return 0;
}
