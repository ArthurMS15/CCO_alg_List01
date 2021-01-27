#include <stdio.h>

int main (){
    int cpf, ndep, min_wage;
    float monthly_rent, disc_p, net_income, aliq, income_tax, discount;
    min_wage = 937;
    printf("Enter your cpf:\n");
    scanf("%d", &cpf);
    printf("Enter your number of dependents:\n");
    scanf("%d", &ndep);
    printf("Enter your monthly rent:\n");
    scanf("%f", &monthly_rent);
    net_income = monthly_rent/min_wage;
    if (ndep >= 3){
        ndep = 3;
    }
    if (net_income <= 2){
        aliq = 0;
    }
        else if (net_income > 2 && net_income <= 3){
            aliq = 0.5;
        }
            else if (net_income > 3 && net_income <= 5){
                aliq = 0.1;
            }
                else if (net_income > 5 && net_income <= 7){
                    aliq = 0.15;
                }
                    else if (net_income > 7){
                        aliq = 0.2;
                    }
    switch (ndep){
        case 0: 
            disc_p = 0;
            break;
        case 1:
            disc_p = 5/100;
            break;
        case 2:
            disc_p = 10/100;
            break;
        case 3:
            disc_p = 15/100;
            break;    
    }
    income_tax = (monthly_rent*aliq);
    discount = disc_p*min_wage;
    income_tax = income_tax - discount;
    if (income_tax <= 0){
        printf("The person is exempt");
    } else {
        printf("The person would have to pay an income tax of: %.2f reais", income_tax);
    }
}