#include <stdio.h>

int main()
{
    //variable declear
    double main_result, result_1, result_2, price_1, price_2;
    int product_code_1, units_of_1, product_code_2, units_of_2;

   //inpute read
    scanf("%d %d %lf", &product_code_1, &units_of_1, &price_1);
    scanf("%d %d %lf", &product_code_2, &units_of_2, &price_2);

    //calculation
    result_1 = units_of_1*price_1;
    result_2 = units_of_2*price_2;

    main_result = result_1+result_2;

    //output result
    printf("VALOR A PAGAR: R$ %.2lf\n", main_result);

    return 0;


}
