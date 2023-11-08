#include <stdio.h>

int main()
{
    int employee, hours;
    float salary, received_ammount;
    scanf("%d %d %f", &employee, &hours, &received_ammount);
    salary = hours*received_ammount;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", employee, salary);
    return 0;

}
