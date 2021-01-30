#include <stdio.h>
#define N 12

int main(){
    int vect[N], sum=0;
    for(int i=0;i<N;i++){
        vect[i]=rand()%N;
    }
    for(int i=0;i<N;i++){
        printf("%d\t", vect[i]);
        if(vect[i]%2==0){
            sum=sum+vect[i];
        }
    }
    printf("\nSum with all even numbers: %d\n", sum);


}