#include <stdio.h>

int main(){
    //variable declared
    double x, y, x2, y2, distance;
    //input read
    scanf("%lf %lf %lf %lf", &x, &y, &x2, &y2);

    //calculation
    distance = sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));

    //output
    printf("%.4lf\n", distance);
    return 0;

}
