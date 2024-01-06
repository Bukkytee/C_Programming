#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int password1 = 1234;

int password2;

int choose;

float withdrawal()

float check_Balance();

float top_Up();

float transfers();

float savings_Account();

float current_Account();

float fixed_Deposit_Account();

float amount;

float new_Account_Balance;

float savings_Account_Balance = 1500370.50;

float current_Account_Balance = 2130655.85;

float fixed_Deposit_Account_Balance = 1750550.20;

float check_Savings_Account_Balance();

float check_Current_Account_Balance();

float check_Fixed_Deposit_Account_Balance();

float top_Up_Savings_Account();

float top_Up_Current_Account();

float top_Up_Fixed_Deposit_Account();

float top_Up_Airtime_Savings_Account();

float top_Up_Data_Savings_Account();

float top_Up_Utility_Savings_Account();

float top_Up_Airtime_Airtel_Savings_Account();

float top_Up_Airtime_Mtn_Savings_Account();

float top_Up_Airtime_Glo_Savings_Account();

float top_Up_Airtime_9Mobile_Savings_Account();

float top_Up_Data_Airtel_Savings_Account();

float top_Up_Data_Mtn_Savings_Account();

float top_Up_Data_Glo_Savings_Account();

float top_Up_Data_9Mobile_Savings_Account();

float top_Up_Electricity_Savings_Account();

float top_Up_Tv_Savings_Account();

float top_Up_Internet_Savings_Account();

float top_Up_Electricity_Eko_Savings_Account();

float top_Up_Electricity_Ikedc_Savings_Account();

float top_Up_Electricity_Powergen_Savings_Account();

int meterNo;

float top_Up_Tv_Gotv_Savings_Account();

float top_Up_Tv_Dstv_Savings_Account();

float top_Up_Tv_Startimes_Savings_Account();

int cardNo;

float top_Up_Internet_Smile_Savings_Account();

float top_Up_Internet_Swift_Savings_Account();

float top_Up_Internet_Spectranet_Savings_Account();

int accID;

float top_Up_Airtime_Current_Account();

float top_Up_Data_Current_Account();

float top_Up_Utility_Current_Account();

float top_Up_Airtime_Airtel_Current_Account();

float top_Up_Airtime_Mtn_Current_Account();

float top_Up_Airtime_Glo_Current_Account();

float top_Up_Airtime_9Mobile_Current_Account();

float top_Up_Data_Airtel_Current_Account();

float top_Up_Data_Mtn_Current_Account();

float top_Up_Data_Glo_Current_Account();

float top_Up_Data_9Mobile_Current_Account();

float top_Up_Electricity_Current_Account();

float top_Up_Tv_Current_Account();

float top_Up_Internet_Current_Account();

float top_Up_Electricity_Eko_Current_Account();

float top_Up_Electricity_Ikedc_Current_Account();

float top_Up_Electricity_Powergen_Current_Account();

float top_Up_Tv_Gotv_Current_Account();

float top_Up_Tv_Dstv_Current_Account();

float top_Up_Tv_Startimes_Current_Account();

float top_Up_Internet_Smile_Current_Account();

float top_Up_Internet_Swift_Current_Account();

float top_Up_Internet_Spectranet_Current_Account();

float top_Up_Airtime_Fixed_Deposit_Account();

float top_Up_Data_Fixed_Deposit_Account();

float top_Up_Utility_Fixed_Deposit_Account();

float top_Up_Airtime_Airtel_Fixed_Deposit_Account();

float top_Up_Airtime_Mtn_Fixed_Deposit_Account();

float top_Up_Airtime_Glo_Fixed_Deposit_Account();

float top_Up_Airtime_9Mobile_Fixed_Deposit_Account();

float top_Up_Data_Airtel_Fixed_Deposit_Account();

float top_Up_Data_Mtn_Fixed_Deposit_Account();

float top_Up_Data_Glo_Fixed_Deposit_Account();

float top_Up_Data_9Mobile_Fixed_Deposit_Account();

float top_Up_Electricity_Fixed_Deposit_Account();

float top_Up_Tv_Fixed_Deposit_Account();

float top_Up_Internet_Fixed_Deposit_Account();

float top_Up_Electricity_Eko_Fixed_Deposit_Account();

float top_Up_Electricity_Ikedc_Fixed_Deposit_Account();

float top_Up_Electricity_Powergen_Fixed_Deposit_Account();

float top_Up_Tv_Gotv_Fixed_Deposit_Account();

float top_Up_Tv_Dstv_Fixed_Deposit_Account();

float top_Up_Tv_Startimes_Fixed_Deposit_Account();

float top_Up_Internet_Smile_Fixed_Deposit_Account();

float top_Up_Internet_Swift_Fixed_Deposit_Account();

float top_Up_Internet_Spectranet_Fixed_Deposit_Account();

float transfers_Savings_Account();

float transfers_Current_Account();

float transfers_Fixed_Deposit_Account();

char accNo[15];

float transfers_Zenith_Savings_Account();

float transfers_Access_Savings_Account();

float transfers_Gt_Savings_Account();

float transfers_First_Savings_Account();

float transfers_Zenith_Current_Account();

float transfers_Access_Current_Account();

float transfers_Gt_Current_Account();

float transfers_First_Current_Account();

float transfers_Zenith_Fixed_Deposit_Account();

float transfers_Access_Fixed_Deposit_Account();

float transfers_Gt_Fixed_Deposit_Account();

float transfers_First_Fixed_Deposit_Account();









int main()
{
    printf("***********************************************************************\n\n");

    printf("*************** AUTOMATIC TELLER MACHINE PROJECT  *********************\n\n");

    printf("***********************************************************************\n");

    printf("\n\t\tWELCOME TO ZENITH BANK");

    printf("\nPlease Insert Your ATM Card !");

    printf("\nPlease Enter Your Password: ");

    scanf("%d", &password2);

    if(password1 == password2){

        printf("Choose The Kind Of Transaction You Want To Make\n");

        printf("1- WITHDRAWAL\n2- CHECK BALANCE\n3- TOP-UP\n4- TRANSFERS");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        withdrawal();

        break;

        case 2:

        check_Balance();

        break;

        case 3:

        top_Up();

        break;

        case 4:

        transfers();

        break;

        default:

            printf("\nInvalid Input");

            main();
        }
    }

    else{

        printf("Invalid Password");

        main();


    }

    return 0;
}

float withdrawal()
{
   printf("\nWhich Type of Account Do You Want To Withdraw From?");

   printf("1- SAVINGS ACOUNT\n2- CURRENT ACCOUNT\n3- FIXED DEPOSIT ACCOUNT");

   scanf("%d", &choose);

        switch(choose){

        case 1:

        savings_Account();

        break;

        case 2:

        current_Account();

        break;

        case 3:

        fixed_Deposit_Account();

        break;

        default:

            printf("\nInvalid Input");

            withdrawal();
        }
}

float check_Balance()
{
   printf("Choose The Account You Want to Check\n");

        printf("1- SAVINGS ACCOUNT\n2- CURRENT ACCOUNT\n3- FIXED DEPOSIT ACCOUNT");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        check_Savings_Account_Balance();

        break;

        case 2:

        check_Current_Account_Balance();

        break;

        case 3:

        check_Fixed_Deposit_Account_Balance();

        break;

        default:

            printf("\nInvalid Input");

            check_Balance();
        }
}

float top_Up()
{
   printf("Choose The Account Where Top-Up Is Used\n");

    printf("1- SAVINGS ACCOUNT\n2- CURRENT ACCOUNT\n3- FIXED DEPOSIT ACCOUNT");

    scanf("%d", &choose);

    switch(choose){

    case 1:

    top_Up_Savings_Account();

    break;

    case 2:

    top_Up_Current_Account();

    break;

    case 3:

    top_Up_Fixed_Deposit_Account();

    break;

    default:

        printf("\nInvalid Input");

        top_Up();
    }
}

float transfers()
{
     printf("Choose Source Account For Transfers\n");

    printf("1- SAVINGS ACCOUNT\n2- CURRENT ACCOUNT\n3- FIXED DEPOSIT ACCOUNT");

    scanf("%d", &choose);

    switch(choose){

    case 1:

    transfers_Savings_Account();

    break;

    case 2:

    transfers_Current_Account();

    break;

    case 3:

    transfers_Fixed_Deposit_Account();

    break;

    default:

        printf("\nInvalid Input");

        transfers();
    }
}

float savings_Account()
{
   printf("\nEnter The Amount You Want To Withdraw: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float current_Account()
{
   printf("\nEnter The Amount You Want To Withdraw: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float fixed_Deposit_Account()
{
    printf("\nEnter The Amount You Want To Withdraw: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float check_Savings_Account_Balance()
{
    printf("Your Savings Account Balance is: %f Naira", savings_Account_Balance);

    printf("\nThank You For Banking With Zenith Bank");

    printf("\nDo You Want To Perform Another Transaction?");

    printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

    scanf("%d", &choose);

    if(choose == 1){

        main();
    }

    else{


    }

}

float check_Current_Account_Balance()
{
    printf("Your Current Account Balance is: %f Naira", current_Account_Balance);

    printf("\nThank You For Banking With Zenith Bank");

    printf("\nDo You Want To Perform Another Transaction?");

    printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

    scanf("%d", &choose);

    if(choose == 1){

        main();
    }

    else{


    }

}

float check_Fixed_Deposit_Account_Balance()
{
    printf("Your Fixed Deposit Account Balance is: %f Naira", fixed_Deposit_Account_Balance);

    printf("\nThank You For Banking With Zenith Bank");

    printf("\nDo You Want To Perform Another Transaction?");

    printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

    scanf("%d", &choose);

    if(choose == 1){

        main();
    }

    else{


    }

}

float top_Up_Savings_Account()
{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- AIRTIME\n2- DATA\n3- UTILITY\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Airtime_Savings_Account();

        break;

        case 2:

        top_Up_Data_Savings_Account();

        break;

        case 3:

        top_Up_ Utility_Savings_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Savings_Account();
        }
}

float top_Up_Current_Account()
{
        printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- AIRTIME\n2- DATA\n3- UTILITY\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Airtime_Current_Account();

        break;

        case 2:

        top_Up_Data_Current_Account();

        break;

        case 3:

        top_Up_Utility_Current_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Current_Account();
        }
}

float top_Up_Fixed_Deposit_Account()
{
            printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- AIRTIME\n2- DATA\n3- UTILITY\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Airtime_Fixed_Deposit_Account();

        break;

        case 2:

        top_Up_Data_Fixed_Deposit_Account();

        break;

        case 3:

        top_Up_Utility_Fixed_Deposit_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Fixed_Deposit_Account();
        }
}

float top_Up_Airtime_Savings_Account()
{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- AIRTEL\n2- MTN\n3- GLO\n4- 9MOBILE\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Airtime_Airtel_Savings_Account();

        break;

        case 2:

        top_Up_Airtime_Mtn_Savings_Account();

        break;

        case 3:

        top_Up_ Airtime_Glo_Savings_Account();

        break;

        case 4:

        top_Up_Airtime_9Mobile_Savings_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Airtime_Savings_Account();
        }
}

float top_Up_Data_Savings_Account()
{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- AIRTEL\n2- MTN\n3- GLO\n4- 9MOBILE\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Data_Airtel_Savings_Account();

        break;

        case 2:

        top_Up_Data_Mtn_Savings_Account();

        break;

        case 3:

        top_Up_ Data_Glo_Savings_Account();

        break;

        case 4:

        top_Up_Data_9Mobile_Savings_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Data_Savings_Account();
        }
}

float top_Up_Utility_Savings_Account()
{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- ELECTRICITY\n2- TV\n3- INTERNET\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Electricity_Savings_Account();

        break;

        case 2:

        top_Up_Tv_Savings_Account();

        break;

        case 3:

        top_Up_Internet_Savings_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Utility_Savings_Account();
        }
}

float top_Up_Airtime_Airtel_Savings_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Airtel Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_Mtn_Savings_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For MTN Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_Glo_Savings_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Glo Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_9Mobile_Savings_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For 9Mobile Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_Airtel_Savings_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Airtel Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_Mtn_Savings_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For MTN Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_Glo_Savings_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Glo Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_9Mobile_Savings_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For 9Mobile Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Electricity_Savings_Account()
{
        printf("Choose Electricity Board\n");

        printf("1- EKO\n2- IKEDC\n3- POWERGEN\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Electricity_Eko_Savings_Account();

        break;

        case 2:

        top_Up_Electricity_Ikedc_Savings_Account();

        break;

        case 3:

        top_Up_Electricity_Powergen_Savings_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Electricity_Savings_Account();
        }
}

float top_Up_Electricity_Eko_Savings_Account()
{
    printf("\nEnter Meter Number: ");

    scanf("%d", &meterNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Electricity Bill At EKO \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Electricity_Ikedc_Savings_Account()
{
    printf("\nEnter Meter Number: ");

    scanf("%d", &meterNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Electricity Bill At IKEDC \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Electricity_Powergen_Savings_Account()
{
    printf("\nEnter Meter Number: ");

    scanf("%d", &meterNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Electricity Bill At POWERGEN \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Tv_Savings_Account()
{
    printf("Choose TV Operator\n");

        printf("1- GOTV\n2- DSTV\n3- STARTIMES\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Tv_Gotv_Savings_Account();

        break;

        case 2:

        top_Up_Tv_Dstv_Savings_Account();

        break;

        case 3:

        top_Up_Tv_Startimes_Savings_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Tv_Savings_Account();
        }
}

float top_Up_Tv_Gotv_Savings_Account()
{
    printf("\nEnter Smart Card Number: ");

    scanf("%d", &cardNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For GOTv Recharge \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Tv_Dstv_Savings_Account()
{
    printf("\nEnter Smart Card Number: ");

    scanf("%d", &cardNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For DSTv Recharge \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Tv_Startimes_Savings_Account()
{
    printf("\nEnter Smart Card Number: ");

    scanf("%d", &cardNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Startimes Recharge \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Internet_Savings_Account()
{
    printf("Choose TV Operator\n");

        printf("1- SMILE\n2- SWIFT\n3- SPECTRANET\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Internet_Smile_Savings_Account();

        break;

        case 2:

        top_Up_Internet_Swift_Savings_Account();

        break;

        case 3:

        top_Up_Internet_Spectranet_Savings_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Internet_Savings_Account();
        }
}

float top_Up_Internet_Smile_Savings_Account()
{
    printf("\nEnter Account ID: ");

    scanf("%d", &accID);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Smile Internet Bundle \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Internet_Swift_Savings_Account()
{
    printf("\nEnter Account ID: ");

    scanf("%d", &accID);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Swift Internet Bundle \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Internet_Spectranet_Savings_Account()
{
    printf("\nEnter Account ID: ");

    scanf("%d", &accID);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account For Spectranet Internet Bundle \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_Current_Account()

{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- AIRTEL\n2- MTN\n3- GLO\n4- 9MOBILE\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Airtime_Airtel_Current_Account();

        break;

        case 2:

        top_Up_Airtime_Mtn_Current_Account();

        break;

        case 3:

        top_Up_ Airtime_Glo_Current_Account();

        break;

        case 4:

        top_Up_Airtime_9Mobile_Current_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Airtime_Current_Account();
        }
}




float top_Up_Airtime_Airtel_Current_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Airtel Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_Mtn_Current_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For MTN Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_Glo_Current_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Glo Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_9Mobile_Current_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For 9Mobile Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_Current_Account()
{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- AIRTEL\n2- MTN\n3- GLO\n4- 9MOBILE\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Data_Airtel_Current_Account();

        break;

        case 2:

        top_Up_Data_Mtn_Current_Account();

        break;

        case 3:

        top_Up_Data_Glo_Current_Account();

        break;

        case 4:

        top_Up_Data_9Mobile_Current_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Data_Current_Account();
        }
}




float top_Up_Data_Airtel_Current_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Airtel Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_Mtn_Current_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For MTN Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_Glo_Current_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Glo Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_9Mobile_Current_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For 9Mobile Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Utility_Current_Account()
{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- ELECTRICITY\n2- TV\n3- INTERNET\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Electricity_Current_Account();

        break;

        case 2:

        top_Up_Tv_Current_Account();

        break;

        case 3:

        top_Up_Internet_Current_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Utility_Current_Account();
        }
}

float top_Up_Electricity_Current_Account()
{
        printf("Choose Electricity Board\n");

        printf("1- EKO\n2- IKEDC\n3- POWERGEN\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Electricity_Eko_Current_Account();

        break;

        case 2:

        top_Up_Electricity_Ikedc_Current_Account();

        break;

        case 3:

        top_Up_Electricity_Powergen_Current_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Electricity_Current_Account();
        }
}

float top_Up_Electricity_Eko_Current_Account()
{
    printf("\nEnter Meter Number: ");

    scanf("%d", &meterNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Electricity Bill At EKO \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Electricity_Ikedc_Current_Account()
{
    printf("\nEnter Meter Number: ");

    scanf("%d", &meterNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Electricity Bill At IKEDC \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Electricity_Powergen_Current_Account()
{
    printf("\nEnter Meter Number: ");

    scanf("%d", &meterNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Electricity Bill At POWERGEN \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Tv_Current_Account()
{
    printf("Choose TV Operator\n");

        printf("1- GOTV\n2- DSTV\n3- STARTIMES\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Tv_Gotv_Current_Account();

        break;

        case 2:

        top_Up_Tv_Dstv_Current_Account();

        break;

        case 3:

        top_Up_Tv_Startimes_Current_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Tv_Current_Account();
        }
}

float top_Up_Tv_Gotv_Current_Account()
{
    printf("\nEnter Smart Card Number: ");

    scanf("%d", &cardNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For GOTv Recharge \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Tv_Dstv_Current_Account()
{
    printf("\nEnter Smart Card Number: ");

    scanf("%d", &cardNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For DSTv Recharge \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Tv_Startimes_Current_Account()
{
    printf("\nEnter Smart Card Number: ");

    scanf("%d", &cardNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Startimes Recharge \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Internet_Current_Account()
{
    printf("Choose TV Operator\n");

        printf("1- SMILE\n2- SWIFT\n3- SPECTRANET\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Internet_Smile_Current_Account();

        break;

        case 2:

        top_Up_Internet_Swift_Current_Account();

        break;

        case 3:

        top_Up_Internet_Spectranet_Current_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Internet_Current_Account();
        }
}

float top_Up_Internet_Smile_Current_Account()
{
    printf("\nEnter Account ID: ");

    scanf("%d", &accID);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Smile Internet Bundle \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Internet_Swift_Current_Account()
{
    printf("\nEnter Account ID: ");

    scanf("%d", &accID);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Swift Internet Bundle \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Internet_Spectranet_Current_Account()
{
    printf("\nEnter Account ID: ");

    scanf("%d", &accID);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account For Spectranet Internet Bundle \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_Fixed_Deposit_Account()
{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- AIRTEL\n2- MTN\n3- GLO\n4- 9MOBILE\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Airtime_Airtel_Fixed_Deposit_Account();

        break;

        case 2:

        top_Up_Airtime_Mtn_Fixed_Deposit_Account();

        break;

        case 3:

        top_Up_Airtime_Glo_Fixed_Deposit_Account();

        break;

        case 4:

        top_Up_Airtime_9Mobile_Fixed_Deposit_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Airtime_Fixed_Deposit_Account();
        }
}




float top_Up_Airtime_Airtel_Fixed_Deposit_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Airtel Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_Mtn_Fixed_Deposit_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For MTN Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_Glo_Fixed_Deposit_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Glo Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Airtime_9Mobile_Fixed_Deposit_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For 9Mobile Airtime \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_Fixed_Deposit_Account()
{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- AIRTEL\n2- MTN\n3- GLO\n4- 9MOBILE\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Data_Airtel_Fixed_Deposit_Account();

        break;

        case 2:

        top_Up_Data_Mtn_Fixed_Deposit_Account();

        break;

        case 3:

        top_Up_Data_Glo_Fixed_Deposit_Account();

        break;

        case 4:

        top_Up_Data_9Mobile_Fixed_Deposit_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Data_Fixed_Deposit_Account();
        }
}




float top_Up_Data_Airtel_Fixed_Deposit_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Airtel Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_Mtn_Fixed_Deposit_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For MTN Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_Glo_Fixed_Deposit_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Glo Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Data_9Mobile_Fixed_Deposit_Account()
{
    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For 9Mobile Data \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Utility_Fixed_Deposit_Account()
{
    printf("Choose The Kind Of Top Up Transaction You Want To Make\n");

        printf("1- ELECTRICITY\n2- TV\n3- INTERNET\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Electricity_Fixed_Deposit_Account();

        break;

        case 2:

        top_Up_Tv_Fixed_Deposit_Account();

        break;

        case 3:

        top_Up_Internet_Fixed_Deposit_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Utility_Fixed_Deposit_Account();
        }
}

float top_Up_Electricity_Fixed_Deposit_Account()
{
        printf("Choose Electricity Board\n");

        printf("1- EKO\n2- IKEDC\n3- POWERGEN\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Electricity_Eko_Fixed_Deposit_Account();

        break;

        case 2:

        top_Up_Electricity_Ikedc_Fixed_Deposit_Account();

        break;

        case 3:

        top_Up_Electricity_Powergen_Fixed_Deposit_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Electricity_Fixed_Deposit_Account();
        }
}

float top_Up_Electricity_Eko_Fixed_Deposit_Account()
{
    printf("\nEnter Meter Number: ");

    scanf("%d", &meterNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Electricity Bill At EKO \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Electricity_Ikedc_Fixed_Deposit_Account()
{
    printf("\nEnter Meter Number: ");

    scanf("%d", &meterNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Electricity Bill At IKEDC \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Electricity_Powergen_Fixed_Deposit_Account()
{
    printf("\nEnter Meter Number: ");

    scanf("%d", &meterNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Electricity Bill At POWERGEN \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Tv_Fixed_Deposit_Account()
{
    printf("Choose TV Operator\n");

        printf("1- GOTV\n2- DSTV\n3- STARTIMES\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Tv_Gotv_Fixed_Deposit_Account();

        break;

        case 2:

        top_Up_Tv_Dstv_Fixed_Deposit_Account();

        break;

        case 3:

        top_Up_Tv_Startimes_Fixed_Deposit_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Tv_Fixed_Deposit_Account();
        }
}

float top_Up_Tv_Gotv_Fixed_Deposit_Account()
{
    printf("\nEnter Smart Card Number: ");

    scanf("%d", &cardNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For GOTv Recharge \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Tv_Dstv_Fixed_Deposit_Account()
{
    printf("\nEnter Smart Card Number: ");

    scanf("%d", &cardNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For DSTv Recharge \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Tv_Startimes_Fixed_Deposit_Account()
{
    printf("\nEnter Smart Card Number: ");

    scanf("%d", &cardNo);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Startimes Recharge \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Internet_Fixed_Deposit_Account()
{
    printf("Choose TV Operator\n");

        printf("1- SMILE\n2- SWIFT\n3- SPECTRANET\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        top_Up_Internet_Smile_Fixed_Deposit_Account();

        break;

        case 2:

        top_Up_Internet_Swift_Fixed_Deposit_Account();

        break;

        case 3:

        top_Up_Internet_Spectranet_Fixed_Deposit_Account();

        break;

        default:

            printf("\nInvalid Input");

            top_Up_Internet_Fixed_Deposit_Account();
        }
}

float top_Up_Internet_Smile_Fixed_Deposit_Account()
{
    printf("\nEnter Account ID: ");

    scanf("%d", &accID);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Smile Internet Bundle \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Internet_Swift_Fixed_Deposit_Account()
{
    printf("\nEnter Account ID: ");

    scanf("%d", &accID);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account For Swift Internet Bundle \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float top_Up_Internet_Spectranet_Fixed_Deposit_Account()
{
    printf("\nEnter Account ID: ");

    scanf("%d", &accID);

    printf("\nEnter The Amount You Want To Top Up: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit For Spectranet Internet Bundle \nYour Account Balance is %f Naira", amount, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_Savings_Account()
{
    printf("Choose Bank To Transfer\n");

        printf("1- ZENITH BANK\n2- ACCESS BANK\n3- GTBANK\n4- FIRST BANK\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        transfers_Zenith_Savings_Account();

        break;

        case 2:

        transfers_Access_Savings_Account();

        break;

        case 3:

        transfers_Gt_Savings_Account();();

        break;

        case 4:

        transfers_First_Savings_Account();();

        break;

        default:

            printf("\nInvalid Input");

            transfers_Savings_Account();
        }
}

float transfers_Current_Account()
{
        printf("Choose Bank To Transfer\n");

        printf("1- ZENITH BANK\n2- ACCESS BANK\n3- GTBANK\n4- FIRST BANK\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        transfers_Zenith_Current_Account();

        break;

        case 2:

        transfers_Access_Current_Account();

        break;

        case 3:

        transfers_Gt_Current_Account();();

        break;

        case 4:

        transfers_First_Current_Account();();

        break;

        default:

            printf("\nInvalid Input");

            transfers_Current_Account();
        }
}

float transfers_Fixed_Deposit_Account()
{
        printf("Choose Bank To Transfer\n");

        printf("1- ZENITH BANK\n2- ACCESS BANK\n3- GTBANK\n4- FIRST BANK\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        transfers_Zenith_Fixed_Deposit_Account();

        break;

        case 2:

        transfers_Access_Fixed_Deposit_Account();

        break;

        case 3:

        transfers_Gt_Fixed_Deposit_Account();();

        break;

        case 4:

        transfers_First_Fixed_Deposit_Account();();

        break;

        default:

            printf("\nInvalid Input");

            transfers_Fixed_Deposit_Account();
        }
}

float transfers_Zenith_Savings_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account And Transferred to Zenith Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_Access_Savings_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account And Transferred to Access Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_Gt_Savings_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account And Transferred to GT Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_First_Savings_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(savings_Account_Balance > amount){

        new_Account_Balance = savings_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Savings Account And Transferred to First Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_Zenith_Current_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account And Transferred to Zenith Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_Access_Current_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account And Transferred to Access Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_Gt_Current_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Cuurent Account And Transferred to GT Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_First_Current_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(current_Account_Balance > amount){

        new_Account_Balance = current_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Current Account And Transferred to First Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_Zenith_Fixed_Deposit_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account And Transferred to Zenith Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_Access_Fixed_Deposit_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account And Transferred to Access Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_Gt_Fixed_Deposit_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account And Transferred to GT Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

float transfers_First_Fixed_Deposit_Account()
{
    printf("\nEnter Account Number: ");

    scanf("%s", &accNo);

    printf("\nEnter The Amount You Want To Transfer: ");

   scanf("%f", &amount);

   if(fixed_Deposit_Account_Balance > amount){

        new_Account_Balance = fixed_Deposit_Account_Balance - amount;

        printf("%f Naira Has Been Debited From Your Fixed Deposit Account And Transferred to First Bank with Acc No %s \nYour Account Balance is %f Naira", amount, accNo, new_Account_Balance);

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }


       }

       else{

        printf("\nInsufficient Balance ");

        printf("\nThank You For Banking With Zenith Bank");

        printf("\nDo You Want To Perform Another Transaction?");

        printf("\n1- CLICK FOR YES\n2- CLICK FOR NO\n");

        scanf("%d", &choose);

        if(choose == 1){

            main();
        }

        else{


        }

       }
}

