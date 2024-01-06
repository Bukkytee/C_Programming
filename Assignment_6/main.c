#include <stdio.h>
#include <stdlib.h>

int selling_Price;

int cost_Price;

int main()
{
    printf("FUNCTIONS\n");

    printf("PROFIT AND LOSS CALCULATOR\n");

    printf("\nEnter cost price: ");

    scanf("%d", &cost_Price);

    printf("\nEnter selling price: ");

    scanf("%d", &selling_Price);

    if(cost_Price < selling_Price){

        profit();
    }
    else if(cost_Price > selling_Price){

    loss();

    }

    else{

        printf("\nNo profit or loss gained");
    }

    return 0;
}

int profit()
{
    int profit = selling_Price - cost_Price;

    printf("\nProfit calculated is = %d naira", profit);
}

int loss()
{
    int loss = cost_Price - selling_Price;

    printf("\nLoss calculated is = %d naira", loss);
}
