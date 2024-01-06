#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("|||||||||| POINTER PRACTICE |||||||||||");

  /*  printf("\n SINGLE DIMENSIONAL ARAY OF POINTERS");

    static int ary[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10};

    int i;

    for (i = 0; i < 10; i ++)

    {

    printf("\n i=%d,ary[i]=%d,*(ary+i)=%d",i,

    ary[i],*(ary + i));

    printf("&ary[i]= %X, ary+i=%X",&ary[i],ary+i);

    /*%X gives unsigned hexadecimal */

   /* printf("\n\n |||||||||| MULTI DIMENSIONAL ARRAY OF POINTERS ||||||||||");

    char a, str[81], *ptr, ptr_str;

    printf("\n Enter a sentence:");

    gets(str);

    printf("\nEnter character to search for: ");

    a = getche();

    ptr = strchr(str,a);

    /* return pointer to char*/

   /* printf( "\n String starts at address: %u",str);

    printf("\n First occurrence of the character is at address: %u ",ptr);

    printf("\n Position of first occurrence(starting from 0)is: % d", ptr_str);

    */

    //MEMORY ALLOCATION

  /*  int *p, n, i, j, temp;

    printf("\nEnter number of elements in the array : ");

    scanf("%d", &n);


    p =(int*)malloc(n*sizeof(int));

    for(i = 0; i< n; ++i) {

        printf("\n Enter element no. %d: ", i + 1);

        scanf("%d", p + i);
    }

    printf("\n Elements in the array are as follows :\n ");

    for(i = 0; i < n - 1; ++i)

        for(j = i + 1; j < n; ++j)

            if(*(p + i) > *(p + j)) {

            temp = *(p + i);

            *(p + i) = *(p + j);

            *(p + j) = temp;
        }

    for(i = 0; i < n; ++i)

        printf("%d\n", *(p + i));


    int number;

    int *ptr;

    int i;

    printf("\n How many ints would you like to store? ");

    scanf("%d", &number);

    ptr = (int *) malloc (number*sizeof(int)); /*allocate memory */

   /* if(ptr!=NULL)

    {
    for(i=0 ; i<number ; i++)

    {

    *(ptr+i) = i;

    }

    for(i=number ; i>0 ; i--)

    {

    printf("%d\n",*(ptr+(i-1))); /* print out in reverse order */

   // }
   /* free(ptr); /* free allocated memory */

  /*  return 0;

    }

    else

    {

    printf("\nMemory allocation failed -not enough memory.\n");

    return 1;

    } */


    float *calloc1, *calloc2;

    int i;

    calloc1 = (float *) calloc(3, sizeof(float));

    calloc2 = (float *)calloc(3, sizeof(float));

    if(calloc1!=NULL && calloc2!=NULL)

    {

    for(i=0 ; i<3 ; i++)

    {
    printf("\n calloc1[%d] holds %05.5f ", i, calloc1[i]);

    printf("\n calloc2[%d] holds %05.5f ", i, *(calloc2+i));

    }

    free(calloc1);

    free(calloc2);

    return 0;

    }

    else

    {

    printf("Not enough memory\n");

    return 1;

    }

    }
