#include <stdio.h>

int main(){
    float net_wage, gross_wage, nhours, count, income_tax, charges, additional, extrahours, total;
    count=0;

    while(count<1){
        printf("Insert your gross wage:\n");
        scanf("%f", &gross_wage);
        if(gross_wage==0){
            count++;
        } else {
            printf("Insert the numbers of hours worked:\n");
            scanf("%f", &nhours);
            if(800<=gross_wage<=1600){
                income_tax=gross_wage*0.08;
                charges=gross_wage*0.05;
            } else if (gross_wage>1600){
                income_tax=gross_wage*0.15;
                charges=gross_wage*0.07;
            }
            if(nhours>160){
                extrahours=nhours-160;
                additional = ((gross_wage/160)*1.5)*extrahours;
            }
            net_wage=gross_wage-income_tax-charges+additional;
            printf("Net wage: %.2f\n", net_wage);
            total=total+net_wage;
        }
    }
    printf("All net wages: %.2f\n", total);
    
    return 0;
}