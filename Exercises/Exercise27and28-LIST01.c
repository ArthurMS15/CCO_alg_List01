#include <stdio.h>

int main (){
    float current_wage, increase, adjusted_wage;
    char employee_name[100];
    printf("Enter the employee name:\n");
    gets(employee_name);
    printf("Enter your wage:\n");
    scanf("%f", &current_wage);
    if (current_wage < 300){
        increase = 0.1;
    }
        else if (current_wage > 300 && current_wage <= 600){
            increase = 0.11;
        }
            else if (current_wage > 600 && current_wage <= 900){
                increase = 0.12;
            }
                else if (current_wage > 900 && current_wage <= 1500){
                    increase = 0.6;
                }
                    else if (current_wage > 1500 && current_wage <= 2000){
                        increase = 0.3;
                    }
                        else if (current_wage > 2000){
                            increase = 0;
                        }
    adjusted_wage = (current_wage*increase)+current_wage;
    printf("Employee: %s\tCurrent wage: %.2f\nIncrease percentage: %.2f\tAdjusted wage: %.2f\n", employee_name, current_wage, increase, adjusted_wage);
}