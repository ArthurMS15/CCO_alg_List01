#include <stdio.h>

int main(){
    int var=0;
    while(var<=1000){
        if(var%10==0){
            printf ("The value of the variable: %d, is multiple of 10\n", var);
        }
        var++;
    }
    return 0;
}