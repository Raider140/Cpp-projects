#include <stdio.h>


int main(){
int num1, num2, num3, sum, diff, prod;
printf("Please enter the first number: ");
scanf("%d", &num1);
printf("Please enter the second number: ");
scanf("%d", &num2);
printf("Please enter the third number: ");
scanf("%d", &num3);
sum = num1 + num2;
diff  = num1 - num3;
prod = num2 * num3;

printf("\nThe sum of the first and second number is: %d\n\
The difference of the first and the third number is: %d\n\
The product of the second and third number is: %d", sum, diff, prod);

return 0;

}

