#include <stdio.h>
#include <math.h>

int main(){
    double avgeven;
    int n, count;
    n=0;
    avgeven=0;
    count=0;
    do{
        printf("Insert a number (int):\n");
        scanf("%d", &n);
        if(n%2==0){
            avgeven=avgeven+n;
            count++;
        }
    } while (n!=0);
    if(n==0){
        count--;
        avgeven=avgeven/count;
        printf("Average of even numbers is: %.2f", avgeven);
    }
    return 0;
}