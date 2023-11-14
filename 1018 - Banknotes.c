#include <stdio.h>

int main()
{
//variable declare
    int banknotes, n100, n50, n20, n10, n5, n2, n1, store;

//Taking input
    scanf("%d", &banknotes);

//print read number
    printf("%d\n", banknotes);

//calculate  the program and showing output
    n100 = banknotes/100;
    store = banknotes%100;
    printf("%d nota(s) de R$ 100,00\n", n100);


    n50 = store/50;
    store = store%50;
    printf("%d nota(s) de R$ 50,00\n", n50);


    n20 = store/20;
    store = store%20;
    printf("%d nota(s) de R$ 20,00\n", n20);

    n10 = store/10;
    store = store%10;
    printf("%d nota(s) de R$ 10,00\n", n10);

    n5 = store/5;
    store = store%5;
    printf("%d nota(s) de R$ 5,00\n", n5);

    n2 = store/2;
    store = store%2;
    printf("%d nota(s) de R$ 2,00\n", n2);

    n1 = store/1;
    printf("%d nota(s) de R$ 1,00\n", n1);

    return 0;
}
