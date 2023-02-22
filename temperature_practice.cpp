#include <stdio.h>


int main(){
int Ftemp;
double Ctemp;
printf("Please enter the temperature in Fahrenheit: ");
scanf("%d", &Ftemp);
/*I would like to use order of operations to solve this rather
rather than parenthesis*/
Ctemp =  (Ftemp-32.0)*5/9;
printf("\nThe temperature in Celsius is %f", Ctemp);

return 0;

}

