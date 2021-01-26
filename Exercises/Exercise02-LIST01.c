#include <stdio.h>

int main(){
    float side, height, base, rectancube;
    printf("Specify the side value:\n");
    scanf("%f", &side);
    printf("Specify the height value:\n");
    scanf("%f", &height);
    printf("Specify the base value:\n");
    scanf("%f", &base);
    rectancube = ((height*base)+(height*side)+(base*side))*2;
    printf("Rectangular cube area is: %.2f\n", rectancube);
}