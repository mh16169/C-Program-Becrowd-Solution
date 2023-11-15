#include <stdio.h>
int main(){
int X, temp;
scanf("%d", &X);
temp=X+12;
if(X%2==0){
    X = X+1;
}
else{
    X=X+0;
}

for(int i = X; i<temp; i+=2){

        printf("%d\n", i);
}

return 0;

}
