#include <stdio.h>

int main (){
    float height, high, avg;
    int n2meters, count;
    high = 0;
    n2meters = 0;
    count=0;

    for(int i=0;i<20;i++){
        printf("Write the height of the person:\n");
        scanf("%f", &height);
        count++;
        if(height>high){
            high=height;
        }
        avg = height + avg;
        if (height > 2){
            n2meters++;
        }
    }
    avg = avg/count;
    printf("Highest height is: %.2f\n", high);
    printf("Average height is: %.2f\n", avg);
    printf("Number of people higher than 2 meters: %d", n2meters);
    
    return 0;
}