#include <stdio.h>
#define TAM 2

float calculaMedia(float b1, float b2, float b3, float b4){
    float med;
    med=(b1+b2+b3+b4)/4;
    
    return med;
}

void escreverResultado(float _media){
    if(_media>=7.) printf("aluno aprovado!\n");
    else if(_media<7. && _media>4.) printf("aluno em exame!\n"); //identificador pode ser diferente
    else printf("reprovado!\n");
}

float carregaValores(){
    float n1,n2,n3,n4,media;
    printf("Digite o valor da n1:\n");
    scanf("%f", &n1);
    printf("Digite o valor da n2:\n");
    scanf("%f", &n2);
    printf("Digite o valor da n3:\n");
    scanf("%f", &n3);
    printf("Digite o valor da n4:\n");
    scanf("%f", &n4);
    media=calculaMedia(n1,n2,n3,n4);
    return media;
}

int main (){
    int i;
    float media=0;
    
    for(i=0;i<TAM;i++){
        media=carregaValores();
        escreverResultado(media);
    }
}