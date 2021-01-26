#include <stdio.h>

int main(){
    float n1, n2;
    printf("Enter the first number:\n");
    scanf("%f", &n1);
    printf("Enter the second number:\n");
    scanf("%f", &n2);
    if (n1 > n2){
        printf("%.2f", n1);
    } else {
        printf("%.2f", n2);
    }
}