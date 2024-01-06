#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("FUNCTIONS\n");

    int i;
    for(i=1; i<=10; i++)
    printf("\nSquare of %d is %d", i, squarer(i));
    return 0;
}

squarer(int x)
//int x;
{
    int j;
    j = x*x;
    return (j);
}

