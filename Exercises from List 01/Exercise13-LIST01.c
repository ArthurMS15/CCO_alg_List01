#include <stdio.h>

int main(){
    float millimeters, inches;

    printf("Enter the amount of water of the rain in inches:\n");
    scanf("%f", &inches);

    millimeters = inches*25.4;
    printf("The amount of water of the rain in converted to millimeters is: %.2f\n", millimeters);
    
    return 0;
}