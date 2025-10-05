/*
 *NAME:ALDRINE WARREN
 *REG NO:PA106/G/28818/25
 *DESCRIPTION:PROGRAM TO SHOWCASE PASSWORD
 */
#include <stdio.h>
//main function
int main()
{
    //declaring variables

    int password;
    // introducing the dowhileloop
    do
    {
        printf("Please enter password: ");//prompting the user to enter the password 1234
        scanf("%d", &password);//storing the user's password for future reference
    }
        while (password!=1234);{    //conditioning the user to exactly enter the password 1234
        printf("Access Granted: ");
    }
    return 0;//program completion
 }
