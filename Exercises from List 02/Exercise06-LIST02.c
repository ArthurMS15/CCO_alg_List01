#include <stdio.h>

int main(){
    double j=1.5;
    double z=1.1;
    int cont=0;
    while(z<=j){
        j=j+0.02;
        z=z+0.03;
        cont++;
    }
    printf("Z is going to be more taller than J in approximately %d years\n", cont);
    return 0;
}