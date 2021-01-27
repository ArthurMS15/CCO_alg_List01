#include <stdio.h>

int main(){
     int a, b, c, sum;

     printf("Enter the first value:\n");
     scanf("%d", &a);
     printf("Enter the second value:\n");
     scanf("%d", &b);
     printf("Enter the third value:\n");
     scanf("%d", &c);

    if (a > b && b > c) sum = a + b;
    if (a > b && b < c) sum = a + c;
    if (a < b && a > c) sum = b + a;
    if (a < b && a < c) sum = b + c;
    if (a < c && a > b) sum = a + c;
    if (a < c && a < b) sum = c + b;
    printf("Sum is: %d", sum);
    
    return 0;
}