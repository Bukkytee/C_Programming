#include <stdio.h>
#include <stdlib.h>

int main()
{
       //Arithmetic Operators
       //Addition

   int salary = 1000000; int bonus = 500000; int totalSalary = salary + bonus;

   //Subtraction

   int latePenalty = 10000;

   int totalSalary2 = salary - latePenalty;

   //Division

   int tenStaffMonthlySalary = 2000000;

   int perStaffMonthlySalary = tenStaffMonthlySalary/10;

   //Multiplication

   int allStaffMonthlySalary = perStaffMonthlySalary*10;

   //Modules

   int num1 = 19;

   int num2 = num1%2;

   //Simple Interest

   int principal = 50000;

   int rate = 5;

   int time = 2;

   int simpleInterest = (principal*rate*time)/100;

   int amount = principal + simpleInterest;

   //Profit and Loss
   //Profit
   float costPrice = 20000;

   float sellingPrice = 20500;

   float profit = sellingPrice - costPrice;

   float profitPercentage = (profit/costPrice)*100;

   printf("\nPrince Monthly Salary is %d", salary);

   printf("\nPrince Monthly Bonus is %d", bonus);

   printf("\nPrince Total Monthly Salary is %d", totalSalary);

   printf("\nPrince Total Monthly Salary with Penalty is %d", totalSalary2);

   printf("\nMonthly Salary per Staff is %d", perStaffMonthlySalary);

   printf("\nMonthly Salary of All Staff is %d", allStaffMonthlySalary);

   printf("\nThe remainder is %d", num2);

   printf("\nThe Simple Interest given at the Rate of 2 years is %d", simpleInterest);

   printf("\nTotal Amount to be Paid is %d", amount);

   printf("\nProfit gained is %f naira", profit);

   printf("\nProfit in percent is %f %%", profitPercentage);


    return 0;
}
