/*
NAME:ALDRINE WARREN
REG NO:PA106/G/28818/25
DESCRIPTION:PROGRAM TO CALCULATE COMPOUND INTEREST
AMOUNT=P*pow(())
 */
// stdio.h and math.h
#include<stdio.h>
#include<math.h>
//main function
 int main()
 {
     // welcoming
        printf("Hello our esteemed customers and welcome to this calculation site:\n");
          double principal; //%lf
          float rate; //%f
          int time;  //%d
         //PROMPTING THE USER TO ENTER DESIRED VALUES
          printf("Enter principle amount:\n");
          scanf("%lf", &principal);

         printf("Enter rate of  interest in percentage:\n");
           scanf("%f", &rate);



      printf("Enter time taken(t):\n");
     scanf("%d", &time);
    //CALCULATION OF COMPOUND INTEREST using formula

     printf("Therefore calculate the interest compounded:\n");
     printf(" %.2lf\n", principal*pow((1+rate/100),time));



     return 0;
 }


