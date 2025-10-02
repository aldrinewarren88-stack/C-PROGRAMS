/*
 *NAME:ALDRINE WARREN
 *REG NO :PA106/G/28818/25
 *DESCRIPTION:PROGRAM TO DISPLAY WATER CHARGES
 */
#include<stdio.h>
   //main function
int main() {
    //declaring variables

    float units,amount;

    //prompting user to enter the total units consumed
    printf("enter units:\n");
    scanf("%f",&units);


    // using conditional if-else statements to calculate the user's amount payable to the authorities

    if(units<=30){
      amount=units*20;
    }
  else if(units<=60){
      amount=units*25 ;
    }
  else if(units>60){
      amount=units*30;
    }

    //Therefore the amount payable to the authorities is displayed as:

    printf("The total amount for water bills is %.2f", amount);
    return 0;
}
