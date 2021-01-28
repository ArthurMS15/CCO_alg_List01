#include <stdio.h>

int main(){
    int limit, n, mult;
    printf("Define the number (to be multiplicated-int):\n");
    scanf("%d", &n);
    printf("Define the limit of the multiplication:\n");
    scanf("%d", &limit);
    for(int aux=0;aux<=limit;aux++){
        mult=n*aux;
        printf("%d * %d = %d\n", n, aux, mult);
    }
    return 0;
}