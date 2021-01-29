#include <stdio.h>

int main(){
    int n, cont;
    double e;
    printf("Insert a value (int):\n");
    scanf("%d", &n);
    if(n<=0){
        printf("It has to be a positive and integer number\n");
    }
    cont=1;
    e=1;
    while(cont<=n){
        e=e+(1.0/(float)cont);
        cont++;
    }
    printf("E value is: %.2f\n", e);
}