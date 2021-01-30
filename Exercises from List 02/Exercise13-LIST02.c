#include <stdio.h>
#include <math.h>

int main(){
    int a;
    int counteven=0;
    int countodd=0;
    int countpositive=0;
    int countnegative=0;

    for(int i=0;i<5;i++){
        printf("Insert a value:\n");
        scanf("%d", &a);
        if(a%2==0){
            counteven++;
        } else {
            countodd++;
        }
        if(a>0){
            countpositive++;
        } else {
            countnegative++;
            if(a==0){
                countnegative--;
            }
        }
    }
    printf("Quantity of even numbers: %d\n", counteven);
    printf("Quantity of odd numbers: %d\n", countodd);
    printf("Quantity of positive numbers: %d\n", countpositive);
    printf("Quantity of negative numbers: %d\n", countnegative);
    
    return 0;
}