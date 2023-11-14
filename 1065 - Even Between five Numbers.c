#include <stdio.h>

int main()
{

    int a, b, c, d, e, sum;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a%2==0)
    {
        a=1;
    }
    else
    {
        a=0;
    }
    if (b%2==0)
    {
        b=1;
    }
    else
    {
        b=0;
    }
    if (c%2==0)
    {
        c=1;
    }
    else
    {
        c=0;
    }
    if(d%2==0)
    {
        d=1;
    }
    else
    {
        d=0;
    }
    if (e%2==0)
    {
        e=1;
    }

    else
    {
        e=0;
    }

    sum  = a+b+c+d+e;

    printf("%d valores pares\n", sum);

    return 0;
}


