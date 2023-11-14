#include <stdio.h>

int main()
{
    int time, av_speed;
    double result;
    const float litter = 12;
    scanf("%d %d", &time, &av_speed);
    result = (av_speed/litter)*time;
    printf("%.3lf\n", result);
    return 0;
}
