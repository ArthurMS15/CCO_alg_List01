#include <stdio.h>
#include <math.h>

int main (){
    int n1;

    printf("Enter the number value (just int)\n");
    scanf("%d", &n1);

    if (n1 % 2 == 0) printf("n1 is even\n");
    else printf("n1 is odd\n");
    
    return 0;
}