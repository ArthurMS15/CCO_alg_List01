#include <stdio.h>
#define TAM 5

void carregarMatriz(int mat[][TAM]){ //dar o tamanho da ultima dimensão
    int l, c;
    for(l=0;l<TAM;l++){
        for(c=0;c<TAM;c++){
            printf("Digite um valor para mat [%i][%i]: ", l,c);
            scanf("%i", &mat[l][c]);
        }
    }
}

void escreverMatriz(int mat[][TAM]){ //dar o tamanho da ultima dimensão
    int l, c;
    printf("Matriz:\n");
    for(l=0;l<TAM;l++){
        for(c=0;c<TAM;c++){
            printf("%i\t", mat[l][c]);
        }
        printf("\n");
    }
}

void calculoMediaPares(int mat[][TAM]){
    int l, c, contPares=0;
    float media=0;
    for(l=0;l<TAM;l++){
        for(c=0;c<TAM;c++){
            if(mat[l][c] % 2 ==0){
                media=media+mat[l][c];
                contPares++;
            }
        }
    }
    media=(media/(float)contPares);
    printf("A media dos numeros pares encontrados na matriz foi de: %.2f\n", media);
}

int main(){
    int mat[TAM][TAM];
    carregarMatriz(mat);
    escreverMatriz(mat);
    calculoMediaPares(mat);
    return 0;
}