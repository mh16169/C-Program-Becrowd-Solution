#include <stdio.h>

int main()
{
    int a, b, c, d, sum, sum2;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (b>c && d>a)
    {
        sum = c+d;
        sum2 = a+b;

        if(sum>sum2)
        {
            if (c>=0 && d>=0)
            {
                if (a%2 == 0)
                {
                    printf("Valores aceitos\n");
                }
                else
                {
                    printf("Valores nao aceitos\n");
                }
            }
            else
            {
                printf("Valores nao aceitos\n");
            }
        }
        else
        {
            printf("Valores nao aceitos\n");
        }
    }
    else
    {
        printf("Valores nao aceitos\n");
    }
    return 0;
}



