#include <stdio.h>

int main(){
    //variable declared
    int a, b, c;

    //input read
    scanf("%d %d %d", &a, &b, &c);

    //calculation and output

    if (a>=b && a>c)
    {
        printf("%d eh o maior\n", a);
    }
    else if (b>a && b>c)
    {
        printf("%d eh o maior\n", b);
    }
    else
    {
        printf("%d eh o maior\n", c);
    }


    return 0;

}
