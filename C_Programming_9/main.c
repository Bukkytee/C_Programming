#include <stdio.h>
#include <stdlib.h>

int first_Value;

int second_Value;


int main()
{
    printf("FUNCTIONS\n");

    int select;

    printf("\nSELECT THE MATHEMATICAL OPERATION YOU WANT TO USE\n");

    printf("1- ADDITION \n2- SUBTRACTION \n3- MULTIPLICATION \n4- DIVISION\n");

    scanf("%d", &select);

    switch(select){

    case 1:
    sum();
    break;

    case 2:
    difference();
    break;

    case 3:
    product();
    break;

    case 4:
    quotient();


    default:

    printf("\nInvalid Input");

    return 0;

    }
}

int sum()
{
    printf("\nSUMMATION CONSOLE\n");

    printf("Enter first value: ");

    scanf("%d", &first_Value);

    printf("Enter second value: ");

    scanf("%d", &second_Value);

    int sum = first_Value + second_Value;

    printf("Sum of the two values = %d", sum);
}

int difference()
{
    printf("\n\nDIFFERENCE CONSOLE\n");

    printf("Enter first value: ");

    scanf("%d", &first_Value);

    printf("Enter second value: ");

    scanf("%d", &second_Value);

    int difference = first_Value - second_Value;

    printf("Difference between the two values = %d", difference);
}

int product()
{
    printf("\n\nPRODUCT CONSOLE\n");

    printf("Enter first value: ");

    scanf("%d", &first_Value);

    printf("Enter second value: ");

    scanf("%d", &second_Value);

    int product = first_Value * second_Value;

    printf("Product of the two values = %d", product);
}

int quotient()
{
    printf("\n\nQUOTIENT CONSOLE\n");

    printf("Enter first value: ");

    scanf("%d", &first_Value);

    printf("Enter second value: ");

    scanf("%d", &second_Value);

    int quotient = first_Value / second_Value;

    printf("Quotient of the two values = %d", quotient);
}




