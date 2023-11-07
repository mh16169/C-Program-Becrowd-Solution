#include <stdio.h>

int main() {

    double a, b, sum;
    const double aw=3.5, bw=7.5;
    scanf("%lf %lf", &a, &b);
    sum =((a*aw)+(b*bw))/(aw+bw);
    printf("MEDIA = %.5lf\n", sum);

    return 0;
}
