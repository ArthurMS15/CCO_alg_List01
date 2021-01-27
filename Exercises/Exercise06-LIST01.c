#include <stdio.h>
#include <math.h>

int main(){
    float radius, spherevol;
    const float PI = 3.14;

    printf("Specify radius value:\n");
    scanf("%f", &radius);

    spherevol = 4/3*PI*pow(radius,3);
    printf("Sphere volume is: %.2f\n", spherevol);
    
    return 0;
}