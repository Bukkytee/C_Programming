#include <stdio.h>
#include <stdlib.h>

 int main()
{
    printf("The number 555 in various forms:\n");
    printf("Without any modifier: \n");
    printf("[%d]\n",555);
    printf("With – modifier :\n");
    printf("[%-d]\n",555);
    printf("With digit string 10 as modifier :\n");
    printf("[%10d]\n",555);
    printf("With 0 as modifier : \n");
    printf("[%0d]\n",555);
    printf("With 0 and digit string 10 as modifiers :\n");
    printf("[%010d]\n",555);
    printf("With -, 0 and digit string 10 as modifiers: \n");
    printf("[%-010d]\n",555);

    //SCANF() sample

    //RESULT CACULATOR

   /* int testScore;

    int labScore;

    int examScore;

    printf("||||||||||||||||| RESULT CALCULATOR ||||||||||||||||");

    printf("\nPlease Enter Your Test Score: ");

    scanf("%d", &testScore);

    printf("\nPlease Enter Your Lab Score: ");

    scanf("%d", &labScore);

    printf("\nPlease Enter Your Exam Score: ");

    scanf("%d", &examScore);

    int totalScore = testScore + labScore + examScore;

    printf("\nYour Test Score is : %d", testScore);

    printf("\nYour Lab Score is : %d", labScore);

    printf("\nYour Exam Score is : %d", examScore);

    printf("\nYour Total Score is : %d", totalScore); */

    // Program to demonstrate the use of getchar()

   /* char letter;

    printf("\nPlease enter any character : ");

    letter = getchar();

    printf("\nThe character entered by you is %c", letter); */

    // This program demonstrates the use of constants and escape sequences in putchar()

    putchar('H');
    putchar('\n');
    putchar('\t');
    putchar('E');
    putchar('\n');
    putchar('\t');
    putchar('\t');
    putchar('L');
    putchar('\n');
    putchar('\t');
    putchar('\t');
    putchar('\t');
    putchar('L');
    putchar('\n');
    putchar('\t');
    putchar('\t');
    putchar('\t');
    putchar('\t');
    putchar('O');

    return 0;

}
