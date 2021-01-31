//escreva um programa em c para ler e armazenar um registro contendo nome, idade e salario de uma pessoa, deve escrever os dados da pessoa
#include <stdio.h>
#define TAM 3 
typedef struct{
    char nome[50];
    int idade;
    float salario;
}sPessoa;

void carregaVetorRegistro(sPessoa vet[]){
    int i;
    for(i=0;i<TAM;i++){ 
    printf("Digite o nome da pessoa:");
    scanf("%s", &vet[i].nome);
    printf("Digite a idade do(a) '%s'", vet[i].nome);
    scanf("%i", &vet[i].idade);
    printf("Digite o salario do(a) '%s':", vet[i].nome);
    scanf("%f", &vet[i].salario);
    }
}

void escreveVetorRegistro(sPessoa vet[], float mediaSalario){
    int i;
    for(i=0;i<TAM;i++){ 
    printf("Nome: %s\n", vet[i].nome);
    printf("Idade: %i\n", vet[i].idade);
    printf("SALARIO: %.2f\n\n", vet[i].salario);
    }
    mediaSalario=mediaSalario/3.0;
    printf("a media do salario eh: %.2f\n", mediaSalario);
}

float calculamediasalarios(sPessoa vet[]){
    int i;
    float soma=0;
    for(i=0;i<TAM;i++){
        soma = soma + vet[i].salario;
    }
    return soma;
}

int main(){
    sPessoa pessoas[TAM];
    float media;
    carregaVetorRegistro(pessoas);
    media=calculamediasalarios(pessoas);
    escreveVetorRegistro(pessoas, media);
    return 0;
}