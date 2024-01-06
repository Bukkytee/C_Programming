#include <stdio.h>
#include <stdlib.h>

int main()
{
    //IF STATEMENTS

    printf("\t\t IF STATEMENTS \n");

    double regNo = 4251256091;

    if(regNo == 4251256091){

        printf("Access Granted !\n");
    }

    //IF ELSE STATEMENTS

    printf("\t\t IF ELSE STATEMENTS \n");

    double admin_No = 4251256091;

    if(admin_No == 4251256091){

        printf("Access Granted !\n");
    }
    else{
        printf("Access Denied !\n");
    }

    //IF...ELSE IF STATEMENTS

   /* printf("\t\t IF...ELSE IF STATEMENTS \n");

    printf("\n||||||||||||||||||||||| FLIGHT TICKET CHECKOUT ||||||||||||||||||||||||||||\n");

    int amount_Paid;

    printf("Please Enter the Amount Paid : ");

    scanf("%d", &amount_Paid);

    if(amount_Paid == 500000){

        printf("Congratulations ! You have purchased a first class ticket with a sum of %d naira.", amount_Paid);
    }
    else if(amount_Paid == 200000){

        printf("Congratulations ! You have purchased a business class ticket with a sum of %d naira.", amount_Paid);
    }
    else if(amount_Paid == 100000){

        printf("Congratulations ! You have purchased an economy class ticket with a sum of %d naira.", amount_Paid);
    }
    else if(amount_Paid < 100000){

        printf("Sorry ! You are not eligible to book for a flight as you have an insufficient balance.");
    }
    else if(amount_Paid > 100000 < 200000 && amount_Paid > 200000 < 500000){

        printf("Invalid Input ! Amount must be paid according to the price given.");
    } */

    //MULTI IF STATEMENTS

    printf("\n\\\\\\\\\\\\\\\\\\\\\\ STUDENT LOGIN \\\\\\\\\\\\\\\\\\\\\\\\\\\\ \n");

    int student_No = 0013;

    int password = 12345;

    if(student_No == 13456)

        if(password == 12345){

            printf("Login Successful ");
            }

        else if(student_No == 0013)

        if(password == 12345){

            printf("invalid password or student registration ");

            }

            else if(student_No == 13456)

        if(password == 234){

            printf("invalid password or student registration ");

            }

            else if(student_No == 0013)

        if(password == 234){

            printf("invalid password or student registration ");

            }

    return 0;
}
