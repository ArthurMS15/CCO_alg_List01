#include <stdio.h>

int main (){
    int n1, n2, n3;
    printf("Enter the first number:\n");
    scanf("%d", &n1);
    printf("Enter the second number:\n");
    scanf("%d", &n2);
    printf("Enter the third number:\n");
    scanf("%d", &n3);
    if (n1>n2 && n2>n3){
        printf("%.d , %.d e %.d\n", n3, n2, n1);
    }
    if (n1>n3 && n3>n2){
        printf("%.d , %.d e %.d\n", n2, n3, n1);
    }
    if (n2>n1 && n1>n3){
        printf("%.d , %.d e %.d\n", n3, n1, n2);
    }
    if (n2>n3 && n3>n1){
        printf("%.d , %.d e %.d\n", n1, n3, n2);
    }
    if (n3>n2 && n2>n1){
        printf("%.d , %.d e %.d\n", n1, n2, n3);
    }
    if (n3>n1 && n1>n2){
        printf("%.d , %.d e %.d\n", n2, n1, n3);
    }
    return 0;
}