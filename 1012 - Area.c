#include <stdio.h>

int main()
{
    //variable declared
    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    const float pi=3.14159;

    //input read
    scanf("%lf %lf %lf", &A, &B, &C);

    //calculation
    TRIANGULO =A*C/1/2;
    CIRCULO = pi*C*C;
    TRAPEZIO = (A+B)*C/1/2;
    QUADRADO = B*B;
    RETANGULO = A*B;


    //output result
    printf("TRIANGULO: %.3lf\n", TRIANGULO);
    printf("CIRCULO: %.3lf\n", CIRCULO);
    printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
    printf("QUADRADO: %.3lf\n", QUADRADO);
    printf("RETANGULO: %.3lf\n", RETANGULO);


    return 0;

}
