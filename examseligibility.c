/*
 *NAME: ALDRINE WARREN
 *REG NO: PA106/G/28818/25
 *DESCRIPTION: PROGRAM TO DISPLAY EXAM ELIGIBILITY
 */
#include <stdio.h> //printf(),scanf()

int main(void) {
float attendance,average ;
    //prompting user to enter attendance
    printf("Enter your lesson attendance this semester  :");
    scanf("%f",&attendance);


    // prompting user to enter average marks
    printf("Enter average marks:");
    scanf("%f",&average);

    // condtional statements

     if (attendance>=75)
         {
         printf("you are eligible to pertake exams\n");
     }else {
         printf("you are not eligible to pertake exams\n");
     }if (average<=40) {
         printf("you are not eligible to pertake exams\n");
     }else {
         printf("you are not eligible to pertake exams\n");
     }


        return 0;
    }