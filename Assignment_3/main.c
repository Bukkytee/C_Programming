#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* printf("ARRAYS\n");

    printf("The Scores of the 5 Students from Lowest to Highest are : \n");

    int i = 0;

    int marks[5] = {20, 30, 40, 50, 60};

    for(i = 0; i < 5; i++){

        printf("%d \n", marks[i]); */

    //Second Example

    int a, b, temp;

    int c[10] = {10, 9, 7, 101, 23, 44, 12, 78, 34, 23};

    for(a = 0; a < 10; a++){

        for(b = a + 1; b < 10; b++)

        {
            if(c[b] > c[a])

            {
                temp = c[a];

                c[a] = c[b];

                c[b] = temp;
            }
        }
    }

    printf("Printing Sorted Element List....\n");

    for(a = 0; a < 10; a++)

    {
        printf("%d \n", c[a]);
    }


    return 0;
}
