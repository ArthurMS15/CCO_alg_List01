#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define TAM 256
#define N 10
#define M 15

typedef struct{
    float r[N][M];
    float g[N][M];
    float b[N][M];
}sImagem;

sImagem** CriarMatriz();
float** CriarMatrizGray();
void CarregareEscreverMatrizRGBeCalculoGray(sImagem **dados, float **matrizgray);
void EscreverMatrizGray(float **matrizgray);
void DesalocarMatrizeMatrizGray(sImagem **dados, float **matrizgray);

int main (){
    sImagem **dados;   
    dados=CriarMatriz();

    float **matrizgray;
    matrizgray=CriarMatrizGray();

    CarregareEscreverMatrizRGBeCalculoGray(dados, matrizgray);
    EscreverMatrizGray(matrizgray);

    DesalocarMatrizeMatrizGray(dados, matrizgray);
    return 0;
}

sImagem** CriarMatriz(){
    sImagem **m;
    m=(sImagem**) malloc(N * sizeof(sizeof(sImagem *)));
    for(int l=0; l<N;l++){
        m[l]=(sImagem*)malloc(M * sizeof(sImagem));
    }
    if (m == NULL){
        printf("Erro ao alocar memoria\n");
    }
    return m;
}

float** CriarMatrizGray(){
    float **mgray;
    mgray=(float**) malloc(N * sizeof(sizeof(float *)));
    for(int l=0; l<N;l++){
        mgray[l]=(float*)malloc(M * sizeof(float));
    }
    if (mgray == NULL){
        printf("Erro ao alocar memoria\n");
    }
    return mgray;
}

void CarregareEscreverMatrizRGBeCalculoGray(sImagem **dados, float **matrizgray){
    printf("IMAGEM COM PIXELS COLORIDOS:\n");
    for(int l=0;l<N;l++){
        for(int c=0;c<M;c++){
            dados[l][c].r[l][c]=rand()%TAM;
            dados[l][c].g[l][c]=rand()%TAM;
            dados[l][c].b[l][c]=rand()%TAM;
            printf("%.f,%.f,%.f\t", dados[l][c].r[l][c], dados[l][c].g[l][c], dados[l][c].b[l][c]);
            matrizgray[l][c]=(0.30*dados[l][c].r[l][c])+(0.59*dados[l][c].g[l][c])+(0.11*dados[l][c].b[l][c]);
        }
        printf("\n");
    }
    printf("\n");
}

void EscreverMatrizGray(float **matrizgray){
    printf("IMAGEM COM PIXELS CINZAS:\n");
    for(int l=0;l<N;l++){
        for(int c=0;c<M;c++){
            printf("%.2f\t", matrizgray[l][c]);
        }
        printf("\n");
    }
    printf("\n");
}

void DesalocarMatrizeMatrizGray(sImagem **dados, float **matrizgray){
    printf("Desalocando memoria das matrizes...\n");
    free(dados);
    free(matrizgray);
}