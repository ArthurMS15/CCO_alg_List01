#include <stdio.h>

int main(){
    float net_wage, gross_wage, nhs, vhs, inss;
    printf("Enter the number of hours:\n");
    scanf("%f", &nhs);
    printf("Enter the hours value:\n");
    scanf("%f", &vhs);
    printf("Enter the INSS percentage:\n");
    scanf("%f", &inss);
    gross_wage = nhs*vhs;
    net_wage = gross_wage-(gross_wage*inss);
    printf("Your net wage is: %.2f\n", net_wage);
}