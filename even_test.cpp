#include <stdio.h>


int main(){

    int number;
    scanf("%d", &number);

    if (!(number%2)){
    printf("%d is an even number", number);
    }
    else if ((number == 0)){
        printf("Your number is %d");
    }
    else {
        printf("%d is an odd number, here is the double %d", number, number*2);
    }



    return 0;
}
