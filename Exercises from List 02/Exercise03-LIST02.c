#include <stdio.h>

int main (){
    int negvalue, stop, vnegquant;
    stop = 0;
    vnegquant = 0;

    while (stop <= 20){
        printf("Insert a value (int):\n");
        scanf("%d", &negvalue);
        if (negvalue < 0){
            printf("Negative value\n");
            vnegquant++;
        }
        if (negvalue > 0){
            printf("Positive value\n");
        }
        if (negvalue == 0){
            printf("Stopped\n");
            printf("Quantity of negative values: %d\n", vnegquant);
            stop = stop - stop;   
        }
        stop++;
    }
    printf("Quantity of negative values: %d\n", vnegquant);
    
    return 0;
}