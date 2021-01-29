#include <stdio.h>

int main(){
    int vneg, stop, vnegquant;
    stop=0;
    vnegquant=0;
    while(stop<=20){
        printf("Insert a value (int):\n");
        scanf("&d", &vneg);
        if(vneg<0){
            printf("Negative value\n");
            vnegquant = vnegquant +1;
        } else if (vneg>0){
            printf("Positive value\n");
        } else if (vneg==0){
            printf("Stopped\n");
            printf("Quantity of negative values: %d\n", vnegquant);
            stop=stop-stop;
        }
        stop=stop + 1;
    }
    printf("Quantity of negative values: %d\n", vnegquant);
}