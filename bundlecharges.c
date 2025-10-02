/*
 *NAME:ALDRINE WARREN
 *REG NO:PA106/G/28818/25
 *DESCRIPTION:PROGRAM TO DISPLAY BUNDLE SELECTION
 */
#include<stdio.h>
//main function
int main()
{
    //declration of the variables choices
    int choice;

    printf("|Option|Bundle|Cost(KES).\n");

    printf("|1|100MB|50\n");

    printf("|2|500MB|200\n");

    printf("|3|1GB|350\n");

    printf("|4|2GB|600\n");

//prompting user to enter avlue between 1-4
printf("Select data bundle between (1-4):\n");
    scanf("%d",&choice);

//introduction of switch to detect user's demands
    switch(choice) {
        case 1:
            printf("Your choice is bundle 1 "
                   "A package of 100MB for 50KES \n");
            scanf("%d",&choice);
            break;
        case 2:
            printf("Your choice is bundle 2 "
                   "A package of 500MB for 200KES\n");
            scanf("%d",&choice);
            break;
        case 3:
            printf("Your choice is bundle 3 "
                   "A package of 1GB for 350KES\n");
            scanf("%d",&choice);
            break;
        case 4:
            printf("Your choice is bundle 4 "
                   "A package 2GB for 200KES\n");
            scanf("%d",&choice);
            break;

    }
    if(choice>4) {
        printf("invalid choice \n");
    }

    return 0;
}




