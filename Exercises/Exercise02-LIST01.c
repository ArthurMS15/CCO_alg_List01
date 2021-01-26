#include <stdio.h>

int main(){
    float side, height, base, rectancube;
    printf("Specify the side value:");
    scanf("%f", &side);
    printf("Specify the height value:");
    scanf("%f", &height);
    printf("Specify the base value:");
    scanf("%f", &base);
    rectancube = ((height*base)+(height*side)+(base*side))*2;
    printf("Rectangular cube area is: %.2f\n", rectancube);
}