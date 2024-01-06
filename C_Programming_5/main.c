#include <stdio.h>
#include <stdlib.h>

int tagged_Price = 10000;

int last_Price = 100;

int reg_No = 2021;

 int school_Fees = 1500000;

int main()
{
    printf("********** Welcome to Session 5 Project **********\n");

    int num;

    printf("\t\tSELECT THE PROJECT YOU WANT TO EXECUTE IN SESSION 5\n");

    printf("1- FOR IF...STATEMENT \n 2- FOR IF ELSE STATEMENT \n 3- FOR IF...ELSE IF...STATEMENT \n 4-FOR MULTIPLE...IF STATEMENTS\n");

    scanf("%d", &num);

    switch(num){

        case 1:

    //IF STATEMENT CONSTRUCT



    if(tagged_Price == 10000){

        printf("Sell this product\n");

    }

    break;

    case 2:

    //IF ELSE STATEMENT CONSTRUCT

    if(last_Price == 100000){

        printf("Sell this product\n");

    }

        else{

            printf("Don't sell this product");
        }
    break;

    case 3:

    //IF ELSE IF STATEMENT

    printf("\n\n\t|||||||||||||||||||||| RESULTS SOFTWARE ||||||||||||||||||||||||||||||");

    int score;

    printf("\n\nENTER YOUR SCORE : ");

    scanf("%d", &score);

    if(score >= 70 && score <= 100){

        printf("\nCongratulations !!!!!\n Your Grade is A because your score is %d marks", score);
    }
    else if(score >= 60 && score <= 69){

        printf("\nExcellent !!!!!\n Your Grade is B because your score is %d marks", score);
    }
    else if(score >= 50 && score <= 59){

        printf("\nGood work !!!!!\n Your Grade is C because your score is %d marks", score);
    }
    else if(score >= 40 && score <= 49){

        printf("\nWell done !!!!!\n Your Grade is D because your score is %d marks", score);
    }
    else if(score >= 30 && score <= 39){

        printf("\nFair !!!!!\n Your Grade is E because your score is %d marks", score);
    }
    else if(score >= 0 && score <= 29){

        printf("\nPoor !!!!!\n Your Grade is F because your score is %d marks", score);
    }
    break;

    case 4:

    //MULTI IF STATEMENTS




    if(reg_No == 2021)
        if(school_Fees == 1500000)
        printf("\n\nAllow to Write Exam As He Is Eligible Due To His Being An Aptech Student and Paying His School Fees");

    default:
        printf("\nInvalid Input");

    }

    return 0;
}

