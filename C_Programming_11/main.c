#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("STRUCTURES\n");

  /*  struct cat {

    char bk_name[25];

    char author[20];

    int edn;

    float price;

    } books1, books2;

    printf("Enter book name: ");

    scanf("%s", &books1.bk_name);

    printf("\nEnter book author: ");

    scanf("%s", &books1.author);

    printf("\nEnter book edition: ");

    scanf("%d", &books1.edn);

    printf("\nEnter book price: ");

    scanf("%f", &books1.price);

    printf("\nBelow is the description of the book you bought: ");

    printf("\nBook Name : %s", books1.bk_name);

    printf("\nBook Author : %s", books1.author);

    printf("\nBook Edition : %d", books1.edn);

    printf("\nBook Price : %f", books1.price); */

    struct info{

        char first_Name[50];

        char last_Name[50];

        char gender;

        int age;

        char course[5];

        int duration;

        float cost;

        int id_No;

    } stud1;

    printf("Enter first name: ");
    scanf("%s", &stud1.first_Name);

    printf("\nEnter last name: ");
    scanf("%s", &stud1.last_Name);

    printf("\nEnter gender: ");
    scanf("%s", &stud1.gender);

    printf("\nEnter age: ");
    scanf("%d", &stud1.age);

    printf("\nEnter course: ");
    scanf("%s", &stud1.course);

    printf("\nEnter course duration: ");
    scanf("%d", &stud1.duration);

    printf("\nEnter cost: ");
    scanf("%f", &stud1.cost);

    printf("\nEnter id No: ");
    scanf("%d", &stud1.id_No);

    printf("\nBelow is the student's details: ");

    printf("\nName: %s", stud1.first_Name);

    printf(" %s", stud1.last_Name);

    printf("\nGender: %c", stud1.gender);

    printf("\nAge: %d", stud1.age);

    printf("\nCourse: %s", stud1.course);

    printf("\nCourse Duration: %d years", stud1.duration);

    printf("\nCost: %f", stud1.cost);

    printf("\nID No: %d", stud1.id_No);

    return 0;
}
