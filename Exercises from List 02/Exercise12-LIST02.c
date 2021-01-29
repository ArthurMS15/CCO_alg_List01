#include <stdio.h>
#include <math.h>

int main(){
    int div;
    for(int i=100;i>=-100;i--){
        div=i;
        if(div%5==0){
            printf("%d\t", div);
        }
    }
}