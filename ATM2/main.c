#include <stdio.h>
#include <stdlib.h>

int password1 =1234;
int password2;
int choose;

 float withdrawal();

 float check_Balance();

 float  top_Up();

float  transfer();

   float savings_Account();

   float current_Account();

   float fixed_Deposit_Account();

   float check_Savings_Account();

   float check_Current_Account();

   float check_Fixed_Deposit_Account();

   float top_Up_Savings_Account();

   float top_Up_Current_Account();

   float top_Up_Fixed_Deposit_Account();

   float top_Up_Airtime_Savings_Account();

   float top_Up_Subscription_Savings_Account();

   float top_Up_Utilities_Saving_Account();

   float top_Up_Airtime_MTN_Savings_Account();

   float top_Up_Airtime_AIRTEL_Savings_Account();

    float top_Up_Airtime_GLO_Savings_Account();

    float top_Up_Airtime_9MOBILE_Savings_Account();

    float top_Up_Airtime_MTN_Subscription_Savings_Account();

    float top_Up_Airtime_AIRTEL_Subscription_Savings_Account();

     float top_Up_Airtime_GLO_Subscription_Savings_Account();

    float top_Up_Airtime_9MOBILE_Subscription_Savings_Account();

    float top_Up_Utilities_Savings_Account();

   float top_Up_NEPA_Savings_Account();

   float top_Up_TV_Savings_Account();

   float top_Up_Cables_Savings_Account();

   float  top_Up_Internet_Savings_Account();

float amount;

float top_Up_Airtime_Current_Account();

float top_Up_Subscription_Current_Account();

float top_Up_Utilities_Current_Account();

float top_Up_Airtime_MTN_Current_Account();

float top_Up_Airtime_AIRTEL_Current_Account();

float top_Up_Airtime_GLO_Current_Account();

float top_Up_Airtime_9MOBILE_Current_Account();

float top_Up_Airtime_MTN_Subscription_Current_Account();

    float top_Up_Airtime_AIRTEL_Subscription_Current_Account();

     float top_Up_Airtime_GLO_Subscription_Current_Account();

    float top_Up_Airtime_9MOBILE_Subscription_Current_Account();

float top_Up_NEPA_Current_Account();

float top_Up_TV_Current_Account();

float top_Up_Internet_Current_Account();

float top_Up_Airtime_Fixed_Deposit_Account();

float top_Up_Subscription_Fixed_Deposit_Account();

float top_Up_Utilities_Fixed_Deposit_Account();

float top_Up_Airtime_MTN_Fixed_Deposit_Account();

float top_Up_Airtime_AIRTEL_Fixed_Deposit_Account();

float top_Up_Airtime_GLO_Fixed_Deposit_Account();

float top_Up_Airtime_9MOBILE_Fixed_Deposit_Account();

float top_Up_Airtime_MTN_Subscription_Fixed_Deposit_Account();

float top_Up_Airtime_AIRTEL_Subscription_Fixed_Deposit_Account();

float top_Up_Airtime_GLO_Subscription_Fixed_Deposit_Account();

float top_Up_Airtime_9MOBILE_Subscription_Fixed_Deposit_Account();

float top_Up_NEPA_Fixed_Deposit_Account();

float top_Up_TV_Fixed_Deposit_Account();

float top_Up_Internet_Fixed_Deposit_Account();

float transfer_Savings_Account();

float transfer_Current_Account();

float transfer_Fixed_Deposit_Account();

float transfer_Zenith_Savings_Account();

float transfer_Access_Savings_Account();

float transfer_Gt_Savings_Account();

float transfer_First_Savings_Account();

float transfer_Zenith_Current_Account();

float transfer_Access_Current_Account();

float transfer_Gt_Current_Account();

float transfer_First_Current_Account();

float transfer_Zenith_Fixed_Deposit_Account();

float transfer_Access_Fixed_Deposit_Account();

float transfer_Gt_Fixed_Deposit_Account();

float transfer_First_Fixed_Deposit_Account();

float new_Account_Balance;

char accNo[10];

float savings_Account_Balance =10000000.60;

float current_Account_Balance =15000000.50;

float fixed_Deposit_Account_Balance = 2000000.35;
int main()
{
    printf("************************************************\n");

    printf("*****                                          *****\n");

    printf("*****       AUTOMATED TELLER MACHINE PROJECT   *****\n");

    printf("*****                                          *****\n");

    printf("************************************************\n");

    printf("\n \tWELCOME TO GTBANK ");
    printf("\nPlease Insert Your ATM Card!");

    printf("\nPlease Enter Your Password!!!");
    scanf("%d", &password2);

    if (password1==password2){
        printf("Select The Kind of Transaction That You want to Make\n");
        printf("1-FOR WITHDRAWAL\n2- TO CHECK YOUR BALANCE\n3- FOR TOP UP\n4- TRANSFER\n");
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
        transfer();
        break;

        default:
            printf("Invalid Selection");
            main();
        }

    }

    else{

        printf("Invalid password!!!");
        main();
    }


    return 0;
}


   float withdrawal(){

       printf("\nWhich Type of Account Do You Want To Withdraw From?\n");
       printf("1-FOR SAVINGS\n 2-TO CURRENT\n 3-FOR FIXED DEPOSIT\n");
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
            printf("Invalid Selection");
            withdrawal();
        }
    }

    float check_Balance(){
  printf("\nWhich Type of Account Do You Want To Check Your Balance?\n");
       printf("1-FOR SAVINGS\n 2-TO CURRENT\n 3-FOR FIXED DEPOSIT\n");
    scanf("%d", &choose);

        switch(choose){

    case 1:
        check_Savings_Account();
        break;

        case 2:
        check_Current_Account();
        break;

        case 3:
        check_Fixed_Deposit_Account();
        break;

        default:
            printf("Invalid Selection");
            check_Balance();
        }

    }

    float  top_Up(){

        printf("\nWhich Type of Account Do You Want To Top Up From?\n");
       printf("1-FOR SAVINGS\n 2-TO CURRENT\n 3-FOR FIXED DEPOSIT\n");
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
            printf("Invalid Selection");
            top_Up();
        }


    }

  float transfer(){
    printf("Choose Source Account For Transfers\n");

    printf("1- SAVINGS ACCOUNT\n2- CURRENT ACCOUNT\n3- FIXED DEPOSIT ACCOUNT");

    scanf("%d", &choose);

    switch(choose){

    case 1:

    transfer_Savings_Account();

    break;

    case 2:

    transfer_Current_Account();

    break;

    case 3:

    transfer_Fixed_Deposit_Account();

    break;

    default:

        printf("\nInvalid Input");

        transfer();
    }
}


   float savings_Account(){
   printf("\nEnter the Amount that you want to Withdraw");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

   }

   float current_Account(){
 printf("\nEnter the Amount that you want to Withdraw");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
   }

   float fixed_Deposit_Account(){
        printf("\nEnter the Amount that you want to Withdraw");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

   }

float check_Savings_Account(){
printf("Your Savings Account Balance is: %f", savings_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
}

float check_Current_Account(){
printf("Your Current Account Balance is: %f", current_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

}

float check_Fixed_Deposit_Account(){
printf("Your Current Account Balance is: %f", fixed_Deposit_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

}

float top_Up_Savings_Account(){

    printf("Select The Kind of Top Up Transaction That You want to Make\n");
        printf("1-FOR AIRTIME\n 2-FOR SUBSCRIPTION\n 3-FOR UTILITIES\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_Airtime_Savings_Account();
        break;

        case 2:
        top_Up_Subscription_Savings_Account();
        break;

        case 3:
        top_Up_Utilities_Savings_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }

}

float top_Up_Current_Account() {
    printf("Select The Kind of Top Up Transaction That You want to Make\n");
        printf("1-FOR AIRTIME\n 2-FOR SUBSCRIPTION\n 3-FOR UTILITIES\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_Airtime_Current_Account();
        break;

        case 2:
        top_Up_Subscription_Current_Account();
        break;

        case 3:
        top_Up_Utilities_Current_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }
}

float top_Up_Fixed_Deposit_Account(){
    printf("Select The Kind of Top Up Transaction That You want to Make\n");
        printf("1-FOR AIRTIME\n 2-FOR SUBSCRIPTION\n 3-FOR UTILITIES\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_Airtime_Fixed_Deposit_Account();
        break;

        case 2:
        top_Up_Subscription_Fixed_Deposit_Account();
        break;

        case 3:
        top_Up_Utilities_Fixed_Deposit_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }

}

float top_Up_Airtime_Savings_Account(){

printf("Select The Kind of Top Up Transaction That You want to Make\n");
        printf("1-FOR MTN\n 2-FOR AIRTEL\n 3-FOR GLO 4-FOR 9MOBILE\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_Airtime_MTN_Savings_Account();
        break;

        case 2:
        top_Up_Airtime_AIRTEL_Savings_Account();
        break;

        case 3:
        top_Up_Airtime_GLO_Savings_Account();
        break;

        case 4:
        top_Up_Airtime_9MOBILE_Savings_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }

}

float top_Up_Subscription_Savings_Account(){

printf("Select The Kind of Top Up Transaction That You want to Make\n");
        printf("1-FOR MTN SUBSCRIPTION\n 2-FOR AIRTEL SUBSCRIPTION\n 3-FOR GLO SUBSCRIPTION 4-FOR 9MOBILE SUBSCRIPTION\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_Airtime_MTN_Subscription_Savings_Account();
        break;

        case 2:
        top_Up_Airtime_AIRTEL_Subscription_Savings_Account();
        break;

        case 3:
        top_Up_Airtime_GLO_Subscription_Savings_Account();
        break;

        case 4:
        top_Up_Airtime_9MOBILE_Subscription_Savings_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }

}

float top_Up_Utilities_Savings_Account(){
    printf("Select The Kind of Utilities Top Up Transaction That You want to Make\n");
        printf("1-FOR NEPA\n 2-FOR TV\n 3-FOR INTERNET\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_NEPA_Savings_Account() ;
        break;

        case 2:
        top_Up_TV_Savings_Account();
        break;

        case 3:
        top_Up_Internet_Savings_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }
}

float top_Up_Airtime_MTN_Savings_Account(){
    printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for MTN Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}

float top_Up_Airtime_AIRTEL_Savings_Account(){
    printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for Airtel Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}
float top_Up_Airtime_GLO_Savings_Account(){
    printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for GLO Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}

float top_Up_Airtime_9MOBILE_Savings_Account(){
printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for 9MOBILE Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}

float top_Up_Airtime_MTN_Subscription_Savings_Account(){
    printf("\nEnter the Amount of MTN Subscription that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for MTN Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_AIRTEL_Subscription_Savings_Account() {
     printf("\nEnter the Amount of AIRTEL Subscription that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for AIRTEL Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_GLO_Subscription_Savings_Account(){
         printf("\nEnter the Amount of GLO Subscription that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for GLO Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_9MOBILE_Subscription_Savings_Account(){

     printf("\nEnter the Amount of 9MOBILE Subscription that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for 9MOBILE Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_NEPA_Savings_Account(){
printf("\nEnter the Amount of NEPA Utility that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for NEPA Utility.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}
float top_Up_TV_Savings_Account(){
printf("\nEnter the Amount of TV Utility that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for TV Utility.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}
float  top_Up_Internet_Savings_Account(){

    printf("\nEnter the Amount of Internet Utility that you want to Top Up");
scanf("%f", &amount);
  if (savings_Account_Balance > amount){

new_Account_Balance = savings_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for Internet Utility.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}


float top_Up_Airtime_Current_Account(){

printf("Select The Kind of Top Up Transaction That You want to Make\n");
        printf("1-FOR MTN\n 2-FOR AIRTEL\n 3-FOR GLO 4-FOR 9MOBILE\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_Airtime_MTN_Current_Account();
        break;

        case 2:
        top_Up_Airtime_AIRTEL_Current_Account();
        break;

        case 3:
        top_Up_Airtime_GLO_Current_Account();
        break;

        case 4:
        top_Up_Airtime_9MOBILE_Current_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }

}

float top_Up_Subscription_Current_Account(){
    printf("Select The Kind of Top Up Transaction That You want to Make\n");
        printf("1-FOR MTN SUBSCRIPTION\n 2-FOR AIRTEL SUBSCRIPTION\n 3-FOR GLO SUBSCRIPTION 4-FOR 9MOBILE SUBSCRIPTION\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_Airtime_MTN_Subscription_Current_Account() ;
        break;

        case 2:
        top_Up_Airtime_AIRTEL_Subscription_Current_Account();
        break;

        case 3:
        top_Up_Airtime_GLO_Subscription_Current_Account();
        break;

        case 4:
        top_Up_Airtime_9MOBILE_Subscription_Current_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }

}

float top_Up_Utilities_Current_Account(){
    printf("Select The Kind of Utilities Top Up Transaction That You want to Make\n");
        printf("1-FOR NEPA\n 2-FOR TV\n 3-FOR INTERNET\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_NEPA_Current_Account() ;
        break;

        case 2:
        top_Up_TV_Current_Account();
        break;

        case 3:
        top_Up_Internet_Current_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }


}

float top_Up_Airtime_MTN_Current_Account(){
    printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for MTN Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}

float top_Up_Airtime_AIRTEL_Current_Account(){
    printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for Airtel Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}
float top_Up_Airtime_GLO_Current_Account(){
    printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for GLO Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}

float top_Up_Airtime_9MOBILE_Current_Account(){
printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for 9MOBILE Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_MTN_Subscription_Current_Account(){
    printf("\nEnter the Amount of MTN Subscription that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for MTN Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_AIRTEL_Subscription_Current_Account() {
     printf("\nEnter the Amount of AIRTEL Subscription that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for AIRTEL Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_GLO_Subscription_Current_Account(){
         printf("\nEnter the Amount of GLO Subscription that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for GLO Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_9MOBILE_Subscription_Current_Account(){

     printf("\nEnter the Amount of 9MOBILE Subscription that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for 9MOBILE Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}


float top_Up_NEPA_Current_Account(){
printf("\nEnter the Amount of NEPA Utility that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for NEPA Utility.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}
float top_Up_TV_Current_Account(){
printf("\nEnter the Amount of TV Utility that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for TV Utility.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}
float  top_Up_Internet_Current_Account(){

    printf("\nEnter the Amount of Internet Utility that you want to Top Up");
scanf("%f", &amount);
  if (current_Account_Balance > amount){

new_Account_Balance = current_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for Internet Utility.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}

float top_Up_Airtime_Fixed_Deposit_Account()
{
    printf("Select The Kind of Top Up Transaction That You want to Make\n");
        printf("1-FOR MTN\n 2-FOR AIRTEL\n 3-FOR GLO 4-FOR 9MOBILE\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_Airtime_MTN_Fixed_Deposit_Account();
        break;

        case 2:
        top_Up_Airtime_AIRTEL_Fixed_Deposit_Account();
        break;

        case 3:
        top_Up_Airtime_GLO_Fixed_Deposit_Account();
        break;

        case 4:
        top_Up_Airtime_9MOBILE_Fixed_Deposit_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }
}

float top_Up_Subscription_Fixed_Deposit_Account()
{
    printf("Select The Kind of Top Up Transaction That You want to Make\n");
        printf("1-FOR MTN SUBSCRIPTION\n 2-FOR AIRTEL SUBSCRIPTION\n 3-FOR GLO SUBSCRIPTION 4-FOR 9MOBILE SUBSCRIPTION\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_Airtime_MTN_Subscription_Fixed_Deposit_Account() ;
        break;

        case 2:
        top_Up_Airtime_AIRTEL_Subscription_Fixed_Deposit_Account();
        break;

        case 3:
        top_Up_Airtime_GLO_Subscription_Fixed_Deposit_Account();
        break;

        case 4:
        top_Up_Airtime_9MOBILE_Subscription_Fixed_Deposit_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }
}

float top_Up_Utilities_Fixed_Deposit_Account()
{
    printf("Select The Kind of Utilities Top Up Transaction That You want to Make\n");
        printf("1-FOR NEPA\n 2-FOR TV\n 3-FOR INTERNET\n");
        scanf("%d", &choose);

        switch(choose){

    case 1:
        top_Up_NEPA_Fixed_Deposit_Account() ;
        break;

        case 2:
        top_Up_TV_Fixed_Deposit_Account();
        break;

        case 3:
        top_Up_Internet_Fixed_Deposit_Account();
        break;

        default:
            printf("Invalid Selection");
            main();
        }
}

float top_Up_Airtime_MTN_Fixed_Deposit_Account(){
    printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for MTN Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}

float top_Up_Airtime_AIRTEL_Fixed_Deposit_Account(){
    printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for Airtel Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}
float top_Up_Airtime_GLO_Fixed_Deposit_Account(){
    printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for GLO Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}

float top_Up_Airtime_9MOBILE_Fixed_Deposit_Account(){
printf("\nEnter the Amount of Airtime that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for 9MOBILE Airtime.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_MTN_Subscription_Fixed_Deposit_Account(){
    printf("\nEnter the Amount of MTN Subscription that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for MTN Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_AIRTEL_Subscription_Fixed_Deposit_Account() {
     printf("\nEnter the Amount of AIRTEL Subscription that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for AIRTEL Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_GLO_Subscription_Fixed_Deposit_Account(){
         printf("\nEnter the Amount of GLO Subscription that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for GLO Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}

float top_Up_Airtime_9MOBILE_Subscription_Fixed_Deposit_Account(){

     printf("\nEnter the Amount of 9MOBILE Subscription that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for 9MOBILE Subscription.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}


float top_Up_NEPA_Fixed_Deposit_Account(){
printf("\nEnter the Amount of NEPA Utility that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for NEPA Utility.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}
float top_Up_TV_Fixed_Deposit_Account(){
printf("\nEnter the Amount of TV Utility that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for TV Utility.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }
}
float  top_Up_Internet_Fixed_Deposit_Account(){

    printf("\nEnter the Amount of Internet Utility that you want to Top Up");
scanf("%f", &amount);
  if (fixed_Deposit_Account_Balance > amount){

new_Account_Balance = fixed_Deposit_Account_Balance - amount;

printf("%f naira Has Been Debited from your Account for Internet Utility.\n Your Account Balance is: %f naira\n", amount, new_Account_Balance);

printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }
  }

  else{

    printf("Insufficient Fund");
     printf("\n Thank you for Banking with us");
        printf("\n Do you want to Perform another Transaction?\n");
        printf("1-FOR YES\n 2-For No");
        scanf("%d", &choose);
        if (choose==1){

           main();
        }

        else{


        }

  }

}

float transfer_Savings_Account()
{
    printf("Choose Bank To Transfer\n");

        printf("1- ZENITH BANK\n2- ACCESS BANK\n3- GTBANK\n4- FIRST BANK\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        transfer_Zenith_Savings_Account();

        break;

        case 2:

        transfer_Access_Savings_Account();

        break;

        case 3:

        transfer_Gt_Savings_Account();

        break;

        case 4:

        transfer_First_Savings_Account();

        break;

        default:

            printf("\nInvalid Input");

            transfer_Savings_Account();
        }
}

float transfer_Current_Account()
{
    printf("Choose Bank To Transfer\n");

        printf("1- ZENITH BANK\n2- ACCESS BANK\n3- GTBANK\n4- FIRST BANK\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        transfer_Zenith_Current_Account();

        break;

        case 2:

        transfer_Access_Current_Account();

        break;

        case 3:

        transfer_Gt_Current_Account();

        break;

        case 4:

        transfer_First_Current_Account();

        break;

        default:

            printf("\nInvalid Input");

            transfer_Current_Account();
        }
}

float transfer_Fixed_Deposit_Account()
{
    printf("Choose Bank To Transfer\n");

        printf("1- ZENITH BANK\n2- ACCESS BANK\n3- GTBANK\n4- FIRST BANK\n");

        scanf("%d", &choose);

        switch(choose){

        case 1:

        transfer_Zenith_Fixed_Deposit_Account();

        break;

        case 2:

        transfer_Access_Fixed_Deposit_Account();

        break;

        case 3:

        transfer_Gt_Fixed_Deposit_Account();

        break;

        case 4:

        transfer_First_Fixed_Deposit_Account();

        break;

        default:

            printf("\nInvalid Input");

            transfer_Fixed_Deposit_Account();
        }
}

float transfer_Zenith_Savings_Account()
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

float transfer_Access_Savings_Account()
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

float transfer_Gt_Savings_Account()
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

float transfer_First_Savings_Account()
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

float transfer_Zenith_Current_Account()
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

float transfer_Access_Current_Account()
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

float transfer_Gt_Current_Account()
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

float transfer_First_Current_Account()
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

float transfer_Zenith_Fixed_Deposit_Account()
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

float transfer_Access_Fixed_Deposit_Account()
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

float transfer_Gt_Fixed_Deposit_Account()
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

float transfer_First_Fixed_Deposit_Account()
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
