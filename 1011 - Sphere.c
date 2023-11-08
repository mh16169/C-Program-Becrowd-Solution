#include <stdio.h>

int main(){
    //variable declear
    const double pi=3.14159;
    double r, result;

   //inpute read
    scanf("%lf", &r);

    //calculation
    result = (4/3.0)*pi*(r*r*r);

    //output result
    printf("VOLUME = %.3lf\n", result);

    return 0;

}
