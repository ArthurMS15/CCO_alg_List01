#include <stdio.h>

int main(){
    int count, sum;
    count=1;
    sum=0;

    while(count<=100){
        sum=sum+count;
        count++;
    }
    printf("The sum of all first 100 natural numbers is: %d\n", sum);
    
    return 0;
}