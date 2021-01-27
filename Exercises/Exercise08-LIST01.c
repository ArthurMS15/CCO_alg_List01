#include <stdio.h>

int main(){
    float fahrenheit, conversion;

    printf("Indicate the temperature in fahrenheit:\n");
    scanf("%f", &fahrenheit);

    conversion = (fahrenheit-32)*5/9;
    printf("Temperature conversion to celsius: %.2f\n", conversion);
    
    return 0;
}