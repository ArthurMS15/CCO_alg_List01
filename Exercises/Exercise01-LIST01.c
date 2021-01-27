#include <stdio.h>

int main(){
    float radius, height, cylinder;
    const float PI = 3.14;

    printf("Specify radius value:\n");
    scanf("%f", &radius);
    printf("Specify height value:\n");
    scanf("%f", &height);
    
    cylinder = 2*PI*radius*height;
    printf("Superficial area of the cylinder is: %.2f\n", cylinder);

    return 0;
}