#include <stdio.h>

int main()
{

    int x, days, months, years, result;

    scanf("%d", &x);

    years = x/365;
    result = x%365;

    months = result/30;

    days = result%30;


    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", years, months, days);


    return 0;
}
