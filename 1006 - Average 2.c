#include <stdio.h>

int main()
{

    double A, B, C, sum;
    const int aw=2, bw=3, cw = 5;
    scanf("%lf %lf %lf", &A, &B, &C);
    sum =((A*aw)+(B*bw)+(C*cw))/(aw+bw+cw);
    printf("MEDIA = %.1lf\n", sum);
    return 0;

}
