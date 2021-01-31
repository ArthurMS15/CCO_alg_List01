#include <stdio.h>
#include <stdlib.h>
#define TAM 10

void carregarVetor(int *y){
    int i;
    for (i=0;i<TAM;i++){
        printf("digite um valor para vet [%i]:\n", i);
        scanf("%i", &y[i]);
    }
}

void escreverVetor(int *vet){
    int i;
    for (i=0;i<TAM;i++){
        printf("%i\t", vet[i]);
    }
}

int* criarVetorDinamico(int tam){
    int *v;
    v = (int*) malloc (tam * sizeof(int));
    return v;
}

int main (){
    int *vet; // vet é um ponteiro
    vet=criarVetorDinamico(TAM);
    if(vet == NULL){
        printf("impossivel alocar memoria\n");
        return 0;
    }
    carregarVetor(vet);
    escreverVetor(vet);
    free(vet);
    //4 bytes um inteiro
    return 0;
}