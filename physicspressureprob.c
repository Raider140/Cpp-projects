#include <stdio.h>
#define M_G     9.81


//This header declaration of a function\ prototype has 4 components
double findacceleration(double, double, double)              ;
//1^return type  2^name/id       3^variable types           4^semicolon

/*In C, a function() with empty formal area
 will be seen as possible for any number of parameters*/

//for math or string, extern is needed so for extern double sin(double x);
//Headers for each library with external functions
double findforce(double t){
    double p;

    p = 4*(t-30)+20;
    return p;
}

int main(){
    double a, mu, m, t;
    m = 0.2;
    m=5.0;
    t=2;
    p=findforce(t);
    printf("%lf", p);



    return 0;

}