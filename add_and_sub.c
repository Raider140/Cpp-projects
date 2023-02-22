#include <stdio.h>
//here in the parenthesis are formal arguements
int AddAndSubtract(int a, int b, int* d){
    int s;
    s = a+b;
    *d=a-b;
    return s;
    

}
int main(){
    int num1, num2, sum, diff;
    printf("What is num1 and num2: ");scanf("%d", &num1);
    scanf("%d", &num2);
    //these variables in the parenthesis are actual arguments
    sum = AddAndSubtract(num1, num2, &diff);
    printf("sum is %d\ndifference is %d", sum, diff);


}
