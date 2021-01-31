#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VOLUME 1

typedef struct{
    int cod_cat;
    int doado;
    char nomeo[100];
    char nomea[50];
    char edit[50];
    int npag;
}Biblioteca;

Biblioteca* criarVetorExatas(int volume){
    Biblioteca *e;
    e=(Biblioteca*) malloc(volume * sizeof(Biblioteca));
    return e;
}

Biblioteca* criarVetorHumanas(int volume){
    Biblioteca *h;
    h=(Biblioteca*) malloc(volume * sizeof(Biblioteca));
    return h;
}

Biblioteca* criarVetorBiomedicas(int volume){
    Biblioteca *b;
    b=(Biblioteca*) malloc(volume * sizeof(Biblioteca));
    return b;
}

int escolhaUsuario(){
    int var=0;
    printf("NAO USE ESPACAMENTO\n");
    printf("\nDigite o determinado numero para fazer uma das acoes:\n");
    printf("\n");
    printf("1 - registrar TODOS os livros de uma area\n");
    printf("2 - consultar por codigo e area\n");
    printf("3 - consultar por nome e area\n");
    printf("4 - ver livros que foram doados\n");
    printf("5 - ver livros comprados que possuem entre 100 a 300 paginas\n");
    printf("6 - alterar um registro pelo codigo, area e outras info\n");
    printf("7 - excluir um livro pelo codigo e area\n");
    printf("8 - para finalizar o programa\n");
    printf("\n");
    scanf("%d", &var);
    return var;
}

int escolhaArea(){
    int area=0;
    printf("\ndigite a area do livro (1-exatas;2-humanas;3-biomedicas)\n");
    scanf("%d", &area);
    return area;
}

int escolhaCodCat(){
    int codcat=0;
    printf("\ndigite o codigo de catalogacao do livro (-1 para finalizar):\n");
    scanf("%d", &codcat);
    return codcat;
}

void escolhaCodAreaExatas(Biblioteca *e){
	int x;
    for(x=0;x<VOLUME;x++){ 
        printf("LIVRO com relacao as EXATAS escreva o nome do livro:\n");
        scanf("%s", &e[x].nomeo);
        printf("LIVRO com relacao as EXATAS escreva o nome do autor desse livro:\n");
        scanf("%s", &e[x].nomea);
        printf("LIVRO com relacao as EXATAS escreva 1 para sim ou 2 para nao sobre se o livro foi doado:\n");
        scanf("%i", &e[x].doado);
        printf("LIVRO com relacao as EXATAS escreva o nome da editora:\n");
        scanf("%s", &e[x].edit);
        printf("LIVRO com relacao as EXATAS escreva o numero total de paginas do livro:\n");
        scanf("%i", &e[x].npag);
        printf("LIVRO com relacao as EXATAS) escreva o codigo de catalogacao:\n");
        scanf("%i", &e[x].cod_cat);
        printf("novo livro de exatas registrado\n\n");
    }
}

void escolhaCodAreaHumanas(Biblioteca *h){
    int x;
	for(x=0;x<VOLUME;x++){ 
        printf("LIVRO com relacao as HUMANAS escreva o nome do livro:\n");
        scanf("%s", &h[x].nomeo);
        printf("LIVRO com relacao as HUMANAS escreva o nome do autor desse livro:\n");
        scanf("%s", &h[x].nomea);
        printf("LIVRO com relacao as HUMANAS escreva 1 para sim ou 2 para nao sobre se o livro foi doado:\n");
        scanf("%i", &h[x].doado);
        printf("LIVRO com relacao as HUMANAS escreva o nome da editora:\n");
        scanf("%s", &h[x].edit);
        printf("LIVRO com relacao as HUMANAS escreva o numero total de paginas do livro:\n");
        scanf("%i", &h[x].npag);
        printf("LIVRO com relacao as HUMANAS escreva o codigo de catalogacao:\n");
        scanf("%i", &h[x].cod_cat);
        printf("novo livro de humanas registrado\n");
    }
}

void escolhaCodAreaBiomedicas(Biblioteca *b){
    int x;
	for(x=0;x<VOLUME;x++){
        printf("LIVRO com relacao as BIOMEDICAS escreva o nome do livro:\n");
        scanf("%s", &b[x].nomeo);
        printf("LIVRO com relacao as BIOMEDICAS escreva o nome do autor desse livro:\n");
        scanf("%s", &b[x].nomea);
        printf("LIVRO com relacao as BIOMEDICAS escreva 1 para sim ou 2 para nao sobre se o livro foi doado:\n");
        scanf("%i", &b[x].doado);
        printf("LIVRO com relacao as BIOMEDICAS escreva o nome da editora:\n");
        scanf("%s", &b[x].edit);
        printf("LIVRO com relacao as BIOMEDICAS escreva o numero total de paginas do livro:\n");
        scanf("%i", &b[x].npag);
        printf("LIVRO com relacao as BIOMEDICAS escreva o codigo de catalogacao:\n");
        scanf("%i", &b[x].cod_cat);
        printf("novo livro de biomedicas registrado\n");
    }
}

void case1case2Exatas(Biblioteca *e){
    int aux=escolhaCodCat();
    int x;
	for(x=0;x<VOLUME;x++){
        if(aux==e[x].cod_cat){
            printf("nome do livro: %s\n", e[x].nomeo);
            printf("o codigo de catalogacao: %d\n", e[x].cod_cat);
            printf("nome do autor: %s\n", e[x].nomea);
            printf("editora: %s\n", e[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", e[x].doado);
            printf("numero de paginas: %d\n", e[x].npag);
            printf("livro atrelado a ciencias exatas\n");
        }
    }
}

void case2case2Humanas(Biblioteca *h){
    int aux=escolhaCodCat();
    int x;
	for(x=0;x<VOLUME;x++){
        if(aux==h[x].cod_cat){
            printf("nome do livro: %s\n", h[x].nomeo);
            printf("o codigo de catalogacao: %d\n", h[x].cod_cat);
            printf("nome do autor: %s\n", h[x].nomea);
            printf("editora: %s\n", h[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", h[x].doado);
            printf("numero de paginas: %d\n", h[x].npag);
            printf("livro atrelado a ciencias humanas\n");
        }
    }
}

void case3case2Biomedicas(Biblioteca *b){
    int aux=escolhaCodCat();
    int x;
	for(x=0;x<VOLUME;x++){
        if(aux==b[x].cod_cat){
            printf("nome do livro: %s\n", b[x].nomeo);
            printf("o codigo de catalogacao: %d\n", b[x].cod_cat);
            printf("nome do autor: %s\n", b[x].nomea);
            printf("editora: %s\n", b[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", b[x].doado);
            printf("numero de paginas: %d\n", b[x].npag);
            printf("livro atrelado a ciencias biomedicas\n");
        }
    }
}

void terceirocasoExatas(Biblioteca *e){
    int case3aux;
    char nome[100];
    printf("insira o nome da obra:\n");
    scanf("%s", &nome);
    int x;
	for(x=0;x<VOLUME;x++){
        case3aux=strcmp(nome, e[x].nomeo);
        if(case3aux==0){
            printf("nome do livro: %s\n", e[x].nomeo);
            printf("o codigo de catalogacao: %d\n", e[x].cod_cat);
            printf("nome do autor: %s\n", e[x].nomea);
            printf("editora: %s\n", e[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", e[x].doado);
            printf("numero de paginas: %d\n", e[x].npag);
            printf("livro atrelado a ciencias exatas\n");
        }
    }
}

void terceirocasoHumanas(Biblioteca *h){
    int case3aux;
    char nome[100];
    printf("insira o nome da obra:\n");
    scanf("%s", &nome);
    int x;
	for(x=0;x<VOLUME;x++){
        case3aux=strcmp(nome, h[x].nomeo);
        if(case3aux==0){
            printf("nome do livro: %s\n", h[x].nomeo);
            printf("o codigo de catalogacao: %d\n", h[x].cod_cat);
            printf("nome do autor: %s\n", h[x].nomea);
            printf("editora: %s\n", h[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", h[x].doado);
            printf("numero de paginas: %d\n", h[x].npag);
            printf("livro atrelado a ciencias exatas\n");
        }
    }
}

void terceirocasoBiomedicas(Biblioteca *b){
    int case3aux;
    char nome[100];
    printf("insira o nome da obra:\n");
    scanf("%s", &nome);
    int x;
	for(x=0;x<VOLUME;x++){
        case3aux=strcmp(nome, b[x].nomeo);
        if(case3aux==0){
            printf("nome do livro: %s\n", b[x].nomeo);
            printf("o codigo de catalogacao: %d\n", b[x].cod_cat);
            printf("nome do autor: %s\n", b[x].nomea);
            printf("editora: %s\n", b[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", b[x].doado);
            printf("numero de paginas: %d\n", b[x].npag);
            printf("livro atrelado a ciencias exatas\n");
        }
    }
}

void consultaDoadoAreaExatas(Biblioteca *e){
    printf("\nAtrelado a exatas o livros que foram DOADOS de EXATAS foram constados abaixo:\n");
    int x;
	for(x=0;x<VOLUME;x++){
        if(e[x].doado==1){
            printf("\n");
            printf("nome do livro: %s\n", e[x].nomeo);
            printf("o codigo de catalogacao: %d\n", e[x].cod_cat);
            printf("nome do autor: %s\n", e[x].nomea);
            printf("editora: %s\n", e[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", e[x].doado);
            printf("numero de paginas: %d\n", e[x].npag);
            printf("livro atrelado a ciencias exatas\n");
            printf("\n");
        }
    }
}

void consultaDoadoAreaHumanas(Biblioteca *h){
    printf("\nAtrelado a humanas o livros que foram DOADOS de HUMANAS foram constados abaixo:\n");
    int x;
	for(x=0;x<VOLUME;x++){
        if(h[x].doado==1){
            printf("\n");
            printf("nome do livro: %s\n", h[x].nomeo);
            printf("o codigo de catalogacao: %d\n", h[x].cod_cat);
            printf("nome do autor: %s\n", h[x].nomea);
            printf("editora: %s\n", h[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", h[x].doado);
            printf("numero de paginas: %d\n", h[x].npag);
            printf("livro atrelado a ciencias humanas\n");
            printf("\n");
        }
    }
}

void consultaDoadoAreaBiomedicas(Biblioteca *b){
    printf("\nAtrelado a biomedicas o livros que foram DOADOS de BIOMEDICAS foram constados abaixo:\n");
    int x;
	for(x=0;x<VOLUME;x++){
        if(b[x].doado==1){
            printf("\n");
            printf("nome do livro: %s\n", b[x].nomeo);
            printf("o codigo de catalogacao: %d\n", b[x].cod_cat);
            printf("nome do autor: %s\n", b[x].nomea);
            printf("editora: %s\n", b[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", b[x].doado);
            printf("numero de paginas: %d\n", b[x].npag);
            printf("livro atrelado a ciencias biomedicas\n");
            printf("\n");
        }
    }
}

void consultaComprado100a300pagAreaExatas(Biblioteca *e){
    printf("\nAtrelado a exatas o livros que foram COMPRADOS de EXATAS e entre 100 a 300 PAGINAS foram constados abaixo:\n");
    int x;
	for(x=0;x<VOLUME;x++){
        if(e[x].doado==2 && e[x].npag >=100 && e[x].npag <= 300){
            printf("\n");
            printf("nome do livro: %s\n", e[x].nomeo);
            printf("o codigo de catalogacao: %d\n", e[x].cod_cat);
            printf("nome do autor: %s\n", e[x].nomea);
            printf("editora: %s\n", e[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", e[x].doado);
            printf("numero de paginas: %d\n", e[x].npag);
            printf("livro atrelado a ciencias exatas\n");
            printf("\n");
        }
    }
}

void consultaComprado100a300pagAreaHumanas(Biblioteca *h){
    printf("\nAtrelado a humanas o livros que foram COMPRADOS de HUMANAS e entre 100 a 300 PAGINAS foram constados abaixo:\n");
    int x;
	for(x=0;x<VOLUME;x++){
        if(h[x].doado==2 && h[x].npag >=100 && h[x].npag <= 300){
            printf("\n");
            printf("nome do livro: %s\n", h[x].nomeo);
            printf("o codigo de catalogacao: %d\n", h[x].cod_cat);
            printf("nome do autor: %s\n", h[x].nomea);
            printf("editora: %s\n", h[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", h[x].doado);
            printf("numero de paginas: %d\n", h[x].npag);
            printf("livro atrelado a ciencias humanas\n");
            printf("\n");
        }
    }
}

void consultaComprado100a300pagAreaBiomedicas(Biblioteca *b){
    printf("\nAtrelado a biomedicas o livros que foram COMPRADOS de BIOMEDICAS e entre 100 a 300 PAGINAS foram constados abaixo:\n");
    int x;
	for(x=0;x<VOLUME;x++){
        if(b[x].doado==2 && b[x].npag >=100 && b[x].npag <= 300){
            printf("\n");
            printf("nome do livro: %s\n", b[x].nomeo);
            printf("o codigo de catalogacao: %d\n", b[x].cod_cat);
            printf("nome do autor: %s\n", b[x].nomea);
            printf("editora: %s\n", b[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", b[x].doado);
            printf("numero de paginas: %d\n", b[x].npag);
            printf("livro atrelado a ciencias biomedicas\n");
            printf("\n");
        }
    }
}

void alteracaoAreaExatas(Biblioteca *e){
    int aux=escolhaCodCat();
    int x;
	for(x=0;x<VOLUME;x++){
        if(aux==e[x].cod_cat){
            printf("\n");
            printf("nome do livro ALTERADO:\n");
            scanf("%s", &e[x].nomeo);
            printf("o codigo de catalogacao ALTERADO:\n");
            scanf("%d", &e[x].cod_cat);
            printf("nome do autor ALTERADO:\n");
            scanf("%s", &e[x].nomea);
            printf("editora ALTERADO:\n");
            scanf("%s", &e[x].edit);
            printf("livro foi doado (ALTERADO)? (1-para sim, 2-para nao)\n");
            scanf("%d", &e[x].doado);
            printf("numero de paginas ALTERADO:\n");
            scanf("%d", &e[x].npag);
            printf("livro ALTERADO atrelado a ciencias exatas ALTERADO\n");
            printf("\n");
        }
    }
}

void alteracaoAreaHumanas(Biblioteca *h){
    int aux=escolhaCodCat();
    int x;
	for(x=0;x<VOLUME;x++){
        if(aux==h[x].cod_cat){
            printf("\n");
            printf("nome do livro ALTERADO:\n");
            scanf("%s", &h[x].nomeo);
            printf("o codigo de catalogacao ALTERADO:\n");
            scanf("%d", &h[x].cod_cat);
            printf("nome do autor ALTERADO:\n");
            scanf("%s", &h[x].nomea);
            printf("editora ALTERADO:\n");
            scanf("%s", &h[x].edit);
            printf("livro foi doado (ALTERADO)? (1-para sim, 2-para nao)\n");
            scanf("%d", &h[x].doado);
            printf("numero de paginas ALTERADO:\n");
            scanf("%d", &h[x].npag);
            printf("livro ALTERADO atrelado a ciencias humanas ALTERADO\n");
            printf("\n");
        }
    }
}

void alteracaoAreaBiomedicas(Biblioteca *b){
    int aux=escolhaCodCat();
    int x;
	for(x=0;x<VOLUME;x++){
        if(aux==b[x].cod_cat){
            printf("\n");
            printf("nome do livro ALTERADO:\n");
            scanf("%s", &b[x].nomeo);
            printf("o codigo de catalogacao ALTERADO:\n");
            scanf("%d", &b[x].cod_cat);
            printf("nome do autor ALTERADO:\n");
            scanf("%s", &b[x].nomea);
            printf("editora ALTERADO:\n");
            scanf("%s", &b[x].edit);
            printf("livro foi doado (ALTERADO)? (1-para sim, 2-para nao)\n");
            scanf("%d", &b[x].doado);
            printf("numero de paginas ALTERADO:\n");
            scanf("%d", &b[x].npag);
            printf("livro ALTERADO atrelado a ciencias biomedicas ALTERADO\n");
            printf("\n");
        }
    }
}

void excluirAreaExatas(Biblioteca *e){
    int aux=escolhaCodCat();
    int x;
	for(x=0;x<VOLUME;x++){
        if(aux==e[x].cod_cat){
            printf("\n");
            printf("LIVRO EXCLUIDO\n");
            e[x].cod_cat=0;
            e[x].doado=0;
            printf("\n");
        }
    }
}

void excluirAreaHumanas(Biblioteca *h){
    int aux=escolhaCodCat();
    int x;
	for(x=0;x<VOLUME;x++){
        if(aux==h[x].cod_cat){
            printf("\n");
            printf("LIVRO EXCLUIDO\n");
            h[x].cod_cat=0;
            h[x].doado=0;
            printf("\n");
        }
    }
}

void excluirAreaBiomedicas(Biblioteca *b){
    int aux=escolhaCodCat();
    int x;
	for(x=0;x<VOLUME;x++){
        if(aux==b[x].cod_cat){
            printf("\n");
            printf("LIVRO EXCLUIDO\n");
            b[x].cod_cat=0;
            b[x].doado=0;
            printf("\n");
        }
    }
}

void finalizarPrograma(){ 
    printf("\nPROGRAMA FINALIZADO\n");
}

int main (){
    Biblioteca *exatas;
    Biblioteca *humanas;
    Biblioteca *biomedicas;
    exatas=criarVetorExatas(VOLUME);
    humanas=criarVetorHumanas(VOLUME);
    biomedicas=criarVetorBiomedicas(VOLUME);
    if(exatas==NULL || humanas==NULL || biomedicas==NULL){
        printf("Impossivel alocar memoria!\n");
        return 0;
    } 
    int loop=1;
    int case3aux;
    int case2aux;
    while(loop==1){ 
        switch(escolhaUsuario()){
            //LETRA A
            case 1:
                switch(escolhaArea()){
                    case 1:
                        escolhaCodAreaExatas(exatas);
                        break;
                    case 2:
                        escolhaCodAreaHumanas(humanas);
                        break;
                    case 3:
                        escolhaCodAreaBiomedicas(biomedicas);
                        break;
                }
                break;
            //LETRA B
            case 2:
                loop=2;
                while(loop==2){ 
                    printf("\ndigite 1 para continuar, -1 para finalizar:\n");
                    scanf("%i", &case2aux);
                    if(case2aux==-1) loop=1;
                    else{ 
                        switch(escolhaArea()){
                            case 1:
                                case1case2Exatas(exatas);
                                break;
                            case 2:
                                case2case2Humanas(humanas);
                                break;
                            case 3:
                                case3case2Biomedicas(biomedicas);
                                break;
                        }
                    }
                }
                break;
            //LETRA C
            case 3:
                loop=3;
                while(loop==3){ 
                    printf("\ndigite 1 para continuar ou -1 para finalizar\n");
                    scanf("%i", &case3aux);
                    if (case3aux==-1) loop=1;
                    else {switch(escolhaArea()){
                        case 1:
                            terceirocasoExatas(exatas);
                            break;
                        case 2:
                            terceirocasoHumanas(humanas);
                            break;
                        case 3:
                            terceirocasoBiomedicas(biomedicas);
                            break;
                    }
                    }
                }
                break;
            //LETRA D
            case 4:
                switch(escolhaArea()){
                    case 1:
                        consultaDoadoAreaExatas(exatas);
                        break;
                    case 2:
                        consultaDoadoAreaHumanas(humanas);
                        break;
                    case 3:
                        consultaDoadoAreaBiomedicas(biomedicas);
                        break;
                }
                break;
            //LETRA E
            case 5:
                switch(escolhaArea()){
                    case 1:
                        consultaComprado100a300pagAreaExatas(exatas);
                        break;
                    case 2:
                        consultaComprado100a300pagAreaHumanas(humanas);
                        break;
                    case 3:
                        consultaComprado100a300pagAreaBiomedicas(biomedicas);
                        break;
                }
                break;
            //LETRA F
            case 6:
                switch(escolhaArea()){
                    case 1:
                        alteracaoAreaExatas(exatas);
                        break;
                    case 2:
                        alteracaoAreaHumanas(humanas);
                        break;
                    case 3:
                        alteracaoAreaBiomedicas(biomedicas);
                        break;
                }
                break;
            //LETRA G
            case 7:
                switch(escolhaArea()){
                    case 1:
                        excluirAreaExatas(exatas);
                        break;
                    case 2:
                        excluirAreaHumanas(humanas);
                        break;
                    case 3:
                        excluirAreaBiomedicas(biomedicas);
                        break;
                }
                break;
            case 8:
                finalizarPrograma();
                return NULL;
        }
    }
    free(exatas);
    free(humanas);
    free(biomedicas);
}