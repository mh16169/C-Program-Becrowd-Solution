#include <stdio.h>

int main(){

int posative;
float n, avrage;
posative = 0;

for(int i=1; i<= 6; i++){

    scanf("%f", &n);
    if(n>0){
        avrage = avrage+n;
        posative++;
    }
}
printf("%d valores positivos\n", posative);
printf("%.1f\n", avrage/posative);

return 0;
}
