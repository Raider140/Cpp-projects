#include <stdio.h>

int main(){
    int number;

    scanf("%d", &number);

    if (!(number%10) && !(number%3)){
        printf("%d is a multiple of three and ten.", &number);

    }
    return 0;
}