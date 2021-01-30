#include <stdio.h>
#define N 12

int main(){
    int vectn[N];
    for(int i=0;i<N;i++){
        printf("Type the %d value for the vector:\n", i+1);
        scanf("%d", &vectn[i]);
    }
    printf("\nVector n:");
    int vectx[N], vecty[N];
    int x1=0;
    int y1=0;
    for(int i=0;i<N;i++){
        printf("%d\t", vectn[i]);
        if(vectn[i]%2==0 && vectn[i]%3==0){
            vectx[x1]=vectn[i];
            x1++;
        } else if (vectn[i]%2==1 && vectn[i]%5==0){
            vecty[y1]=vectn[i];
            y1++;
        }
    }
    printf("\n");
    for(int i=0;i<x1;i++){
        printf("%d\t", vectx[i]);
    }
    printf("\n");
    for(int i=0;i<y1;i++){
        printf("%d\t", vecty[i]);
    }

}