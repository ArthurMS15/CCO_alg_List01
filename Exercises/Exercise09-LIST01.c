#include <stdio.h>

int main(){
    float current_wage, adjusted_wage, adjustment;
    adjustment = 23.75/100;
    printf("Indicate your current wage:\n");
    scanf("%f", &current_wage);
    adjusted_wage = (current_wage*adjustment) + current_wage;
    printf("Your adjusted wage is: %.2f\n", adjusted_wage);
}