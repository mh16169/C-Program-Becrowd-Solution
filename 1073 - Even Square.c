#include <stdio.h>

int main()
{
    int i, n, sum;
    scanf("%d", &n);
    for(i =1; i<=n; i++)
    {
        i =i+1;
        sum = i*i;
        printf("%d^2 = %d\n",i, sum);
    }
    return 0;
}
