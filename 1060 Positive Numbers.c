#include <stdio.h>

int main(){

    int posative;
    float n;

     posative = 0;

    for(int i = 1; i <= 6; i++){
        scanf("%f", &n);
        if(n>0)
        posative++;
    }

    printf("%d valores positivos\n", posative);

return 0;
}
