#include <stdio.h>
#include <stdlib.h>

int main()
{
    //FOR LOOP

    int count;
    printf("This is a for loop.\n");
    printf("This is a ");
    for(count = 1; count <=20; count++) {
        printf("\n loop");
    }
    printf("\n that was repeated 20 times");

    //WHILE LOOP

    printf("\n\nThe even numbers from 1-20 are : ");

    int even_Num = 2;

    while(even_Num <= 20){


        printf("\n %d", even_Num);

        even_Num+=2;
    }

    //DO...WHILE LOOP

    int oddNum = 1;

    do{
        printf("\n\n In %d", oddNum);

        oddNum+=2;

    }

    while(oddNum <= 100);

    return 0;
}
