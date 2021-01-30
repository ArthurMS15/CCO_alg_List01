#include <stdio.h>
#define SIZE 5

int main(){
    float height[SIZE];
    int age[SIZE];

    for(int i=0;i<SIZE;i++){
        printf("Input the height of the %d person:\n", i+1);
        scanf("%f", &height[i]);
        printf("Input the age of the %d person:\n", i+1);
        scanf("%d", &age[i]);
    }
    printf("Height (inverted order):\n");
    for(int i=SIZE-1;i>=0;i--){
        printf("%.2f\t", height[i]);
    }
    printf("\nAge (inverted order):\n");
    for(int i=SIZE-1;i>=0;i--){
        printf("%d\t", age[i]);
    }
}