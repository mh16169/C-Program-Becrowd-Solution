#include <stdio.h>
int main(){

int X, result;

scanf("%d", &X);

for(int i = 1; i<=X; i++){
    result++;
    if(result%2==1){
    printf("%d\n", result);

    }
}

return 0;

}
