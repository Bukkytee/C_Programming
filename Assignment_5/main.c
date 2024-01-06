#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("MEMORY ALLOCATION\n");

    int n,i,*ptr,sum=0;

    printf("Enter number of elements: ");

    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int)); //allocates memory

    if(ptr==NULL)

    {
        printf("Sorry! Unable to allocate memory");

        exit(0);
    }

    printf("Enter elements of array: ");

    for(i=0;i<n;++i)

    {
        scanf("%d",ptr+i);

        sum += *(ptr+i);
    }

    printf("Sum=%d",sum);

    free(ptr); // free allocated memory


    int a,j,*var,total = 0;

    printf("Enter number of elements: ");

    scanf("%d",&a);

    ptr=(int*)calloc(a,sizeof(int));  //memory allocated using calloc

    if(var==NULL)

    {
        printf("Sorry! unable to allocate memory");

        exit(0);
    }

    printf("Enter elements of array: ");

    for(j=0;j<a;++j)

    {
        scanf("%d",var+j);

        sum+=*(var+j);
    }

    printf("Sum=%d",total);

    free(var);

    return 0;
}
