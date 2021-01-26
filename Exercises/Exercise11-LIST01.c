#include <stdio.h>

int main(){
    float late_payment, installment, tax, nlatedays;
    printf("Specify installment value:\n");
    scanf("%f", &installment);
    printf("Specify tax value:\n");
    scanf("%f", &tax);
    printf("Specify the number of late days:\n");
    scanf("%f", &nlatedays);
    late_payment = installment+(installment*(tax/100)*nlatedays);
    printf("Late payment value is: %.2f\n", late_payment);
}