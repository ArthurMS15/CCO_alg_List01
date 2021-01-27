#include <stdio.h>

int main(){
    float n1,n2,n3,n4,avg;

    printf("Write the value of the first number:\n");
    scanf("%f", &n1);
    printf("Write the value of the second number:\n");
    scanf("%f", &n2);
    printf("Write the value of the third number:\n");
    scanf("%f", &n3);
    printf("Write the value of the fourth number:\n");
    scanf("%f", &n4);

    avg = (n1+n2+n3+n4)/4;
    printf("The average between all these numbers is: %.2f\n", avg);
    
    return 0;
}