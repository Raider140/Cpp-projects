/*Student Assignment Submission Form
I declare that the attached assignment is wholly my own work in accordance witH UCF Academic 
Policy. No part of this assignment has been copied manually or electronically from any other 
source (including web sites) or distributed to other students. My name is: LITTLE NATHAN, 
Date: 02/12/2023 */

#include <stdio.h>

#include <string.h> //for strcat()
void dash_line();

int main(){
    //ALL INTEGER OR %d VALUES ASSIGNED HERE
    int User_Housing, User_Meal, User_Park, User_Tele, Service_Counter=0, n1=24, n2=15;
    //ALL CHARACTER VARIABLES INITIALIZED HERE
    char Yes_Housing, Yes_Meal, Yes_Park;
    //ALL FLOAT VARIABLES INITIALIZED HERE
    float Semester_Total, Discount = 0.08, Discount_Total, Pre_Tax_Tot, Tax_Rate = .06, Tax_Total, Final_Total;
    //STRINGS TO MAKE THE BILL DETAIL'S STRING FORMATTING EASIER
    char Houstring[] = "On-Campus Housing";
    char cable[] = "Cable: ";
    char ent_1[] = "Entertainment Lite";
    char ent_2[] = "Entertainment Premium";
    
    //These arrays are for easier reference to the costs of services.
    float Housing[] = {1521.79, 2365.83, 3139.01};
    float Meal[] = {782.50, 1356.12, 1832.39};
    float Park[] = {455.55, 995.99};
    float Tele[] = {39.01, 99.99};
    //INTRODUCTION I/O FOR THE USERS
    printf("Welcome to the University of Northeast Florida\
    \nWould you like On-Campus Housing? (Y or N): ");
    scanf(" %c", &Yes_Housing);
    //HOUSING AND CABLE OPTIONS
    if (Yes_Housing =='Y'){
        Service_Counter++;
        printf("Choose package 1, 2 or 3: "); scanf("%d", &User_Housing);
        printf("Choose Cable TV Plan: Entertainment Lite (1) or Entertainment Premium\n(2): "); 
        scanf("%d", &User_Tele);
        User_Housing--;
        User_Tele--;
        Semester_Total+= Housing[User_Housing] + Tele[User_Tele];
        }
    printf("Would you like a Meal Plan? (Y or N): ");scanf(" %c", &Yes_Meal);
    //MEAL PLAN OPTINS
    if (Yes_Meal == 'Y'){
        Service_Counter++;
        printf("Choose package 1, 2 or 3: "); scanf("%d", &User_Meal);
        Semester_Total +=Meal[--User_Meal];
        }
    printf("Would you like a Parking Permit? (Y or N): ");scanf(" %c", &Yes_Park);
    //PARKING PERMIT OPTIONS
    if (Yes_Park == 'Y'){
        Service_Counter++;
        printf("Choose package 1 or 2: ");scanf("%d", &User_Park);
        Semester_Total+=Park[--User_Park];
        }
    //ADJUSTING TOTAL TO ACCOMODATE FOR THE DISCOUNT CASE
    if (Service_Counter > 1){
        Discount_Total = Semester_Total*Discount*-1;
    }


    //ASSIGNING TAXES AND FINDING A TOTAL
    Pre_Tax_Tot=Semester_Total+Discount_Total;

    Tax_Total=Pre_Tax_Tot*Tax_Rate;

    Final_Total=Tax_Total+Pre_Tax_Tot;


    //LAYOUT OF THE BILLING DETAILS 
    dash_line();
    printf("\nUniversity of Northeast Florida Bill Details\n");
    dash_line();
    printf("\nService%*cPackage%*cCost\n", n1, ' ', n2, ' ');
    //HOUSING AND CABLE PACKAGE AND COST PRINT LINES 

    /*Thruoghout the string formatting below, I had trouble figuring out how to 
    use the format specifiers for strings and integers and floats, so I 
    brute-forced formatting the width, there are improvements to be made here 
    especially.*/
    if (Yes_Housing == 'Y'){
         printf("%-33s    %-16d$ %.2f\n",Houstring, ++User_Housing, Housing[User_Housing]);
        if (User_Tele == 0){
            printf("     %s       %-16d$%8.2f\n",  strcat(cable, ent_1), ++User_Tele, Tele[User_Tele]);
        }
        else{
            printf("     %s    %-16d$%8.2f\n",  strcat(cable, ent_2), ++User_Tele, Tele[User_Tele]);
        }
    }

    /*SOMETHING TO NOTE IS THAT I TRIED TO USE IF STATEMENTS BUT ONLY WHILE LOOPS WOULD WORK
    SOMETHING TO FIX LATER*/


    //MEAL PACKAGE AND COST PRINT LINE
    if (Yes_Meal == 'Y'){
        printf("Meal Plan%*c%d%*c$%8.2f\n", n1+4, ' ',++User_Meal, n2, ' ', Meal[User_Meal]);
        Yes_Meal = 'X';
    }
    //PARKING PACKAGE AND COST PRINT LINE
    if (Yes_Park == 'Y'){
        printf("Parking%*c%d%*c$%8.2f\n", n1+6, ' ',++User_Park, n2, ' ', Park[User_Park]);
        Yes_Park = 'X';
    }
    //SUBTOTAL COST PRINT LINE
    printf("Subtotal:%*c$%8.2f\n", n1+n2+5, ' ', Semester_Total);

    //BUNDLE DISCOUNT PRINT LINE
    printf("Bundle Discount:%*c8%%%*c$%8.2f\n", n1-3, ' ', n2-1, ' ', Discount_Total);

    //TOTAL BEFORE TAXES PRINT LINE
    printf("Total Before Tax:%*c$%8.2f\n", n1+n2-3, ' ', Pre_Tax_Tot);

    //TAX COST PRINT LINE
    printf("Tax:%*c$%8.2f\n", n1+n2+10, ' ', Tax_Total);

    //TOTAL AMOUNT DUE THIS SEMESTER PRINT LINE
    printf("Amount Due:%*c$%8.2f\n", n1+n2+3, ' ', Final_Total);
    dash_line();
    return 0;
    
    }
    
//A FUNCTION FOR CREATING A LINE OF HYPHENS
void dash_line(){

    for (int p=0; p<75; p++){
        printf("-");
    }
    return;
}