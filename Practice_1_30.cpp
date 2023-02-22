#include <stdio.h> 
#include <math.h>

void leap_year();
void years_which_leap();

int main(){
    int flag = 0;
    char choice_JK;
    while (!flag){
        printf("Would you like to:\n\n\
        >Determine if a certain year is a leap year [Press J]\n\
        >Print every leap year from 0 CE to 2023 [Press K]");
        scanf("%c", &choice_JK);
    switch (choice_JK)  {

        case 'J': leap_year();
        break;
        case 'K': years_which_leap();
        flag = 1;
        break;
        }
    printf("Would you like to go again? [enter Y for yes and N for no]: ");
    scanf("%c", &choice_JK);
    switch (choice_JK){
        case 'Y':flag = 0;
        break;
        case 'N': printf("See you next time."); flag = 1;
        break;
    }
        }
    }

void leap_year(){
        int what_year;
        printf("Please enter a year between 1 CE and 2023: ");
        scanf("%d", &what_year);
        if (what_year >1 && what_year%4 == 0 && what_year%100 > 0  || what_year%400 == 0){
            printf("%d is a leap year!", what_year);
        }
        else {
            int years_until = what_year%4;
            printf("There are %d years until the next leap year.", years_until);
        }

        return;
        }

void years_which_leap(){
    for (int leap_years_list = 4 ; leap_years_list < 2023; leap_years_list +=4) {
        printf("%d\n", leap_years_list);
    }
    return;
}
