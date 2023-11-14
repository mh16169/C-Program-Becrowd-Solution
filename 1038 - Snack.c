#include <stdio.h>

int main(){

    int x, y;
    double sum;

    scanf("%d %d", &x, &y);
    double arr[6]={0, 4.00, 4.50, 5.00, 2.00, 1.50};



    sum = arr[x]*y;

    printf("Total: R$ %.2f\n",sum);


    return 0;

}
