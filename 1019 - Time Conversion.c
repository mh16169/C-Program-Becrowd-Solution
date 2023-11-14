#include <stdio.h>

int main(){

long long int x, result, minute, secound, hours;

scanf("%lld", &x);



hours= x/3600;

result = x%3600;

minute = result/60;

secound = result%60;

printf("%lld:%lld:%lld\n",hours, minute, secound);


return 0;


}
