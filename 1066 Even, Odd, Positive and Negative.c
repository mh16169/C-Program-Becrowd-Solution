#include <stdio.h>

int main(){

int n, even, odd, positive,nagative;

even = 0;
odd = 0;
positive = 0;
nagative = 0;
for(int i= 1; i<=5; i++){
    scanf("%d", &n);

    if(n%2==0){
        even++;

        if(n>0){
            positive++;
        }
        else if(n<0){
            nagative++;
        }
    }
    else{
        odd++;
        if(n<0){
            nagative++;
        }
        else if(n>0){
            positive++;
        }
    }
}

printf("%d valor(es) par(es)\n", even);
printf("%d valor(es) impar(es)\n", odd);
printf("%d valor(es) positivo(s)\n", positive);
printf("%d valor(es) negativo(s)\n", nagative);

return 0;
}
