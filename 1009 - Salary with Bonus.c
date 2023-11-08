#include <stdio.h>

int main(){
    char name[]=" ";
    double salary, sold, total, sum;
    scanf("%s %lf %lf", &name, &salary, &sold);
    total= (15/100.00)*sold;
    sum = total+salary;
    printf("TOTAL = R$ %.2f\n", sum);

    return 0;
}
