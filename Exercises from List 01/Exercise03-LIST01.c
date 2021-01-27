#include <stdio.h>
#include <math.h>

int main(){
    float radius, sphere;
    const float PI = 3.14;

    printf("Specify the radius value:\n");
    scanf("%f", &radius);

    sphere = 4*PI*pow(radius,2);
    printf("Superficial area of the sphere is: %.2f\n", sphere);
    
    return 0;
}