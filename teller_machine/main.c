#include <stdio.h>
#include <stdlib.h>

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

