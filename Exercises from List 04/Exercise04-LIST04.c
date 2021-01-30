#include <stdio.h>
#define N 12

int main(){
    int vectn[N], x1=0-1, y1=0-1;
    for(int i=0;i<N;i++){
        printf("Type the %d value for the vector:\n", i+1);
        scanf("%d", &vectn[i]);
    }
    porintf("\nVector n:");
    int vectx[x1], vecty[y1];
    for(int i=0;i<N;i++){
        printf("%d\t", vectn[i]);
        if(vectn[i]%2==0 && vectn[i]%3==0){
            x1++;
            vectx[x1]=vectn[i];
        } else if (vectn[i]%2==1 && vectn[i]%5==0){
            y1++;
            vecty[y1]=vectn[i];
        }
    }
}