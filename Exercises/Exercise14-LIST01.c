#include <stdio.h>
#include <conio.h>

int main(){
    char seller_name [100];
    float fixed_wage, sales, percentage, total_wage;
    printf("Write your name please:\n");
    gets(seller_name);
    printf("Enter the value of your fixed wage:\n");
    scanf("%f", &fixed_wage);
    printf("Enter the value of all your sales:\n");
    scanf("%f", &sales);
    printf("Enter your percentage value (not converted):\n");
    scanf("%f", &percentage);
    total_wage = fixed_wage+((percentage/100)*sales);
    printf("Seller: %s\tReceived: %.2f reais\n", seller_name, total_wage);
    return 0;
}