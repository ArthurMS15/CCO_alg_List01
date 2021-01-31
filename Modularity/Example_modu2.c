#include <stdio.h>
#include <math.h>
#define N 12

void carregaVetor(int vet[]){
    int i;
    for(i=0;i<N;i++){
        printf("Digite o valor para vet[%i]:", i);
        scanf("%i", &vet[i]);
    }
}

void escreverVetor(int vet[]){
    int i;
    printf("Os valores no vetor sao:\n");
    for(i=0;i<N;i++){
        printf("%i\n", vet[i]);
    }
}

void somaValorpar(int vet[]){
    int soma=0;
    int i;
    for(i=0;i<N;i++){
        if(vet[i] % 2 == 0){
            soma=soma+vet[i];
        }
    }
    printf("\nA soma de todos os valores pares foi de: %i\n", soma);
}

int main (){
    int vet[N];
    carregaVetor(vet);
    escreverVetor(vet);
    somaValorpar(vet);
    return 0;
}