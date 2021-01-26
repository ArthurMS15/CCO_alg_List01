#include <stdio.h>
#include <math.h>

int main(){
    float radius, height, conevol;
    const float PI = 3.14;
    printf("Specify radius value:");
    scanf("%f", &radius);
    printf("Specify height value:");
    scanf("%f", &height);
    conevol = (PI*pow(radius,2)*height)/3;
    printf("Cone volume is: %.2f\n", conevol);

}