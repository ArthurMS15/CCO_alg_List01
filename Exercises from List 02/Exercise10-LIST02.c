#include <stdio.h>
#include <math.h>

int main(){
    double avgeven;
    int n, cont;
    n=0;
    avgeven=0;
    cont=0;
    do{
        printf("Insert a number (int):\n");
        scanf("%d", &n);
        if(n%2==0){
            avgeven=avgeven+n;
            cont++;
        }
    } while (n!=0);
    if(n==0){
        cont--;
        avgeven=avgeven/cont;
        printf("Average of even numbers is: %.2f", avgeven);
    }
}