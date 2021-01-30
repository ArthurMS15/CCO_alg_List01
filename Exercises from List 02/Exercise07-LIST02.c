#include <stdio.h>

int main (){
    float n, a1, a1_1, r, sum, generalterm, cont;

    printf("Indicate the value of the number of terms of the arithmetic progression (n):\n");
    scanf("%f", &n);
    printf("Indicate the value of the first term of the progression (a1):\n");
    scanf("%f", &a1);
    printf("indicate the value of the reason for the progression (r):\n");
    scanf("%f", &r);
    cont = 0;
    a1_1 = a1;
    generalterm = a1 + (n-1)*r;
    if (r == 0){
        printf("It is not an arithmetic progression, because the general term will have the same value as the first term\n");
    }
    while (cont < n){
        if (r != 0){
            cont = cont + 1;
            a1 = a1 + r;
            printf("The term is: %.2f\n", a1);
        }
    }
    sum = (a1_1 + generalterm)*n/2;
    printf("Sum: %.2f\n", sum);
    
    return 0;
}