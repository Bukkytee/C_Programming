#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //EXAMPLE 1

   /* char ary[5];

    int i;

    printf("\n Enter string : ");

    scanf("%s",ary);

    printf("\n The string is %s \n\n", ary);

    for (i= 0; i < 5; i++)

    printf("\t %d", ary[i]);

    */

    /*

    //EXAMPLE 2

    int ary[10];

    int i, total, high;

    for(i = 0; i < 10; i++)
    {

    printf("\n Enter value: %d : ", i+1);

    scanf("%d",&ary[i]);
    }



    /* Displays highest of the entered values */

    /*

    high = ary[0];

    for(i = 1; i < 10; i++)
    {

    if(ary[i] > high)

    high = ary[i];

    }

    printf("\nHighest value entered was %d", high);

    /*prints average of values entered for ary[10] */

    /*

    for(i = 0,total = 0; i < 10; i++)

    total = total + ary[i];

    printf("\nThe average of the elements of ary is %d",total/i);

    printf("\nThe Total is :  %d \n", total);

    */

    int i, n = 0;

    int item;

    char x[10][12];

    char temp[12];

    system("clear");

    printf("Enter each string on a separate line\n\n");

    printf("Type ‘END’ when over \n\n");

    /* read in the list of strings */

    do
    {

    printf("String %d : ", n + 1);

    scanf("%s", x[n]);

    } while (strcmp(x[n++], "END"));

    /*reorder the list of strings */

    n = n - 1;

    for(item = 0; item < n - 1; ++item)
    {

    /* find lowest of remaining strings */

    for(i = item + 1; i < n; ++i)
    {

    if(strcmp (x[item], x[i]) > 0)
    {

    /*interchange two stings */

    strcpy (temp, x[item]);

    strcpy (x[item], x[i]);

    strcpy (x[i], temp);
    }
    }
    }

    /* Display the arranged list of strings */

    printf("Recorded list of strings : \n");

    for(i = 0; i < n ; ++i)
    {

    printf("\nString %d is %s", i+1, x[i]);

    }

    return 0;
}
