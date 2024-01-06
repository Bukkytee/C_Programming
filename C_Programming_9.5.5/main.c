#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void check(char *a, char *b, int (*cmp)());

char* s1;

char* s2;

int main()
{
    char s1[80];
    int (*p)();
    p = strcmp;
    gets(s1);
    gets(s2);
    check(s1, s2, p);
    return 0;
}

void check(char *a, char *b, int (*cmp)())
{
    printf("Testing for equality \n");
    if (!(*cmp)(a,b))
    printf("Equal");
    else
    printf("Not Equal");
}
