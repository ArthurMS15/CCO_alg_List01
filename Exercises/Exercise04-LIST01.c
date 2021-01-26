#include <stdio.h>

int main(){
    float radius, height, areacone;
    const float PI = 3.14;
    printf("Specify radius value:");
    scanf("%f", &radius);
    printf("Specify height value:");
    scanf("%f", &height);
    areacone=PI*radius*height;
    printf("Cone area is: %.2f\n", areacone);
}