#include <stdio.h>
#include <stdlib.h>
#define TAM 2

typedef struct{
    char nome[50];
    char cpf[11];
    int idade;
    float salario;
} Pessoa;

void carregarVetorPessoas(Pessoa *p){
    int i;
    for(i=0;i<TAM;i++){
        printf("digite o nome para a pessoa [%i]:\n", i);
        scanf("%s", &p[i].nome);
        printf("digite o cpf para a pessoa [%i]:\n", i);
        scanf("%s", &p[i].cpf);
        printf("digite a idade para a pessoa [%i]:\n", i);
        scanf("%i", &p[i].idade);
        printf("digite o salario para a pessoa [%i]:\n", i);
        scanf("%f", &p[i].salario);
    }
}

void escreverVetorPessoas(Pessoa *p){
    int i;
    for(i=0;i<TAM;i++){
        printf("nome: %s\n", p[i].nome);
        printf("cpf : %s\n", p[i].cpf);
        printf("idade: %i\n", p[i].idade);
        printf("salario: %.2f\n", p[i].salario);
        printf("\n");
    }
}

Pessoa* criarVetorPessoas(int tam){
    Pessoa *p;
    p=(Pessoa*) malloc(tam * sizeof(Pessoa));

    return p;
}
int main (){
    Pessoa *pessoas;
    pessoas = criarVetorPessoas(TAM);
    if(pessoas==NULL){
        printf("impossivel alocar memoria\n");
        return 0;
    }
    carregarVetorPessoas(pessoas);
    escreverVetorPessoas(pessoas);
    free(pessoas);
    return 0;
}