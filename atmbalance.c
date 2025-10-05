/*
 *NAME:ALDRINE WARREN
 *REG NO:PA106/G/28818/25
 *DESCRIPTION:PROGRAM TO DISPLAY ATMBALANCE AFTER  EVERY WITHDRAWAL
 */
#include<stdio.h>

//main function
int main () {

//declaring variables
    int balance,withdraw;//start

    printf("Welcome to Aldrine Banking Services\n");
    printf("We would like you to initialise your transaction\n:");

    printf("Enter the your bank balance:\n ");//prompting user to enter their bank balance
    scanf("%d",&balance);

while(balance>0) { //stop
    printf("Enter the amount you want to withdraw:\n ");//prompting user to enter withdrawal amount
    scanf("%d",&withdraw);
    balance-=withdraw;//step,balance=balance - withdraw

    printf("your current bank balance is  %d:\n",balance);//displaying user's current account balance
}
    printf("Sorry,you have insufficient balance to carry through your transaction.\n");

    printf("Thank you for using the Aldrine Banking Services\n");
    return 0;
}