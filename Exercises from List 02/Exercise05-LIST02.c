#include <stdio.h>

int main(){
    int n, cont;
    double e, fat;
    printf("Insert n value (int):\n");
    scanf("%d", &n);
    if(n<=0){
        printf("It has to be a positive and integer number\n");
    }
    cont=1;
    e=1;
    while(cont<=n){
        fat=cont;
        for(int i=fat-1;i>1;i--){
            fat=fat*i;
        }
        e=e+(1.0/fat);
        cont++;
    }
    printf("E value is: %.2f\n", e);
    return 0;
}