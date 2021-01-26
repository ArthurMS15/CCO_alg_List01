#include <stdio.h>

int main(){
    int n;
    printf("Enter the N value:\n");
    scanf("%d", &n);
    if(n<0){
        printf("n, is negative\n");
    } else if (n>0){
            printf("n, is positive\n");
        }
        else if (n==0){
                printf("n, is null\n");
            }
    return 0;
}