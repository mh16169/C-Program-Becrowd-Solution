#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, R1, R2, x1;
    scanf("%lf %lf %lf", &a, &b, &c);

    x1 = pow(b,2)-((4)*(a)*(c));
    x1 = sqrt(x1);

    if (a!=0 && x1>0)
    {
        R1= (-b+x1)/(2*a);
        R2= (-b-x1)/(2*a);

        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    else
    {
        printf("Impossivel calcular\n");
    }

    return 0;
}
