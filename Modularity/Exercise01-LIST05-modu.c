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

void escolhaCodAreaExatas(Biblioteca exatas[]){
    for(int x=0;x<VOLUME;x++){ 
        printf("LIVRO com relacao as EXATAS escreva o nome do livro:\n");
        scanf("%s", &exatas[x].nomeo);
        printf("LIVRO com relacao as EXATAS escreva o nome do autor desse livro:\n");
        scanf("%s", &exatas[x].nomea);
        printf("LIVRO com relacao as EXATAS escreva 1 para sim ou 2 para nao sobre se o livro foi doado:\n");
        scanf("%i", &exatas[x].doado);
        printf("LIVRO com relacao as EXATAS escreva o nome da editora:\n");
        scanf("%s", &exatas[x].edit);
        printf("LIVRO com relacao as EXATAS escreva o numero total de paginas do livro:\n");
        scanf("%i", &exatas[x].npag);
        printf("LIVRO com relacao as EXATAS) escreva o codigo de catalogacao:\n");
        scanf("%i", &exatas[x].cod_cat);
        printf("novo livro de exatas registrado\n\n");
    }
}

void escolhaCodAreaHumanas(Biblioteca humanas[]){
    for(int x=0;x<VOLUME;x++){ 
        printf("LIVRO com relacao as HUMANAS escreva o nome do livro:\n");
        scanf("%s", &humanas[x].nomeo);
        printf("LIVRO com relacao as HUMANAS escreva o nome do autor desse livro:\n");
        scanf("%s", &humanas[x].nomea);
        printf("LIVRO com relacao as HUMANAS escreva 1 para sim ou 2 para nao sobre se o livro foi doado:\n");
        scanf("%i", &humanas[x].doado);
        printf("LIVRO com relacao as HUMANAS escreva o nome da editora:\n");
        scanf("%s", &humanas[x].edit);
        printf("LIVRO com relacao as HUMANAS escreva o numero total de paginas do livro:\n");
        scanf("%i", &humanas[x].npag);
        printf("LIVRO com relacao as HUMANAS escreva o codigo de catalogacao:\n");
        scanf("%i", &humanas[x].cod_cat);
        printf("novo livro de humanas registrado\n");
    }
}

void escolhaCodAreaBiomedicas(Biblioteca biomedicas[]){
    for(int x=0;x<VOLUME;x++){
        printf("LIVRO com relacao as BIOMEDICAS escreva o nome do livro:\n");
        scanf("%s", &biomedicas[x].nomeo);
        printf("LIVRO com relacao as BIOMEDICAS escreva o nome do autor desse livro:\n");
        scanf("%s", &biomedicas[x].nomea);
        printf("LIVRO com relacao as BIOMEDICAS escreva 1 para sim ou 2 para nao sobre se o livro foi doado:\n");
        scanf("%i", &biomedicas[x].doado);
        printf("LIVRO com relacao as BIOMEDICAS escreva o nome da editora:\n");
        scanf("%s", &biomedicas[x].edit);
        printf("LIVRO com relacao as BIOMEDICAS escreva o numero total de paginas do livro:\n");
        scanf("%i", &biomedicas[x].npag);
        printf("LIVRO com relacao as BIOMEDICAS escreva o codigo de catalogacao:\n");
        scanf("%i", &biomedicas[x].cod_cat);
        printf("novo livro de biomedicas registrado\n");
    }
}

void consultaDoadoAreaExatas(Biblioteca exatas[]){
    printf("\nAtrelado a exatas o livros que foram DOADOS de EXATAS foram constados abaixo:\n");
    for(int x=0;x<VOLUME;x++){
        if(exatas[x].doado==1){
            printf("\n");
            printf("nome do livro: %s\n", exatas[x].nomeo);
            printf("o codigo de catalogacao: %d\n", exatas[x].cod_cat);
            printf("nome do autor: %s\n", exatas[x].nomea);
            printf("editora: %s\n", exatas[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", exatas[x].doado);
            printf("numero de paginas: %d\n", exatas[x].npag);
            printf("livro atrelado a ciencias exatas\n");
            printf("\n");
        }
    }
}

void consultaDoadoAreaHumanas(Biblioteca humanas[]){
    printf("\nAtrelado a humanas o livros que foram DOADOS de HUMANAS foram constados abaixo:\n");
    for(int x=0;x<VOLUME;x++){
        if(humanas[x].doado==1){
            printf("\n");
            printf("nome do livro: %s\n", humanas[x].nomeo);
            printf("o codigo de catalogacao: %d\n", humanas[x].cod_cat);
            printf("nome do autor: %s\n", humanas[x].nomea);
            printf("editora: %s\n", humanas[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", humanas[x].doado);
            printf("numero de paginas: %d\n", humanas[x].npag);
            printf("livro atrelado a ciencias humanas\n");
            printf("\n");
        }
    }
}

void consultaDoadoAreaBiomedicas(Biblioteca biomedicas[]){
    printf("\nAtrelado a biomedicas o livros que foram DOADOS de BIOMEDICAS foram constados abaixo:\n");
    for(int x=0;x<VOLUME;x++){
        if(biomedicas[x].doado==1){
            printf("\n");
            printf("nome do livro: %s\n", biomedicas[x].nomeo);
            printf("o codigo de catalogacao: %d\n", biomedicas[x].cod_cat);
            printf("nome do autor: %s\n", biomedicas[x].nomea);
            printf("editora: %s\n", biomedicas[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", biomedicas[x].doado);
            printf("numero de paginas: %d\n", biomedicas[x].npag);
            printf("livro atrelado a ciencias biomedicas\n");
            printf("\n");
        }
    }
}

void consultaComprado100a300pagAreaExatas(Biblioteca exatas[]){
    printf("\nAtrelado a exatas o livros que foram COMPRADOS de EXATAS e entre 100 a 300 PAGINAS foram constados abaixo:\n");
    for(int x=0;x<VOLUME;x++){
        if(exatas[x].doado==2 && exatas[x].npag >=100 && exatas[x].npag <= 300){
            printf("\n");
            printf("nome do livro: %s\n", exatas[x].nomeo);
            printf("o codigo de catalogacao: %d\n", exatas[x].cod_cat);
            printf("nome do autor: %s\n", exatas[x].nomea);
            printf("editora: %s\n", exatas[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", exatas[x].doado);
            printf("numero de paginas: %d\n", exatas[x].npag);
            printf("livro atrelado a ciencias exatas\n");
            printf("\n");
        }
    }
}

void consultaComprado100a300pagAreaHumanas(Biblioteca humanas[]){
    printf("\nAtrelado a humanas o livros que foram COMPRADOS de HUMANAS e entre 100 a 300 PAGINAS foram constados abaixo:\n");
    for(int x=0;x<VOLUME;x++){
        if(humanas[x].doado==2 && humanas[x].npag >=100 && humanas[x].npag <= 300){
            printf("\n");
            printf("nome do livro: %s\n", humanas[x].nomeo);
            printf("o codigo de catalogacao: %d\n", humanas[x].cod_cat);
            printf("nome do autor: %s\n", humanas[x].nomea);
            printf("editora: %s\n", humanas[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", humanas[x].doado);
            printf("numero de paginas: %d\n", humanas[x].npag);
            printf("livro atrelado a ciencias humanas\n");
            printf("\n");
        }
    }
}

void consultaComprado100a300pagAreaBiomedicas(Biblioteca biomedicas[]){
    printf("\nAtrelado a biomedicas o livros que foram COMPRADOS de BIOMEDICAS e entre 100 a 300 PAGINAS foram constados abaixo:\n");
    for(int x=0;x<VOLUME;x++){
        if(biomedicas[x].doado==2 && biomedicas[x].npag >=100 && biomedicas[x].npag <= 300){
            printf("\n");
            printf("nome do livro: %s\n", biomedicas[x].nomeo);
            printf("o codigo de catalogacao: %d\n", biomedicas[x].cod_cat);
            printf("nome do autor: %s\n", biomedicas[x].nomea);
            printf("editora: %s\n", biomedicas[x].edit);
            printf("livro foi doado? %i (1-para sim, 2-para nao)\n", biomedicas[x].doado);
            printf("numero de paginas: %d\n", biomedicas[x].npag);
            printf("livro atrelado a ciencias biomedicas\n");
            printf("\n");
        }
    }
}

void alteracaoAreaExatas(Biblioteca exatas[]){
    int aux=escolhaCodCat();
    for(int x=0;x<VOLUME;x++){
        if(aux==exatas[x].cod_cat){
            printf("\n");
            printf("nome do livro ALTERADO:\n");
            scanf("%s", &exatas[x].nomeo);
            printf("o codigo de catalogacao ALTERADO:\n");
            scanf("%d", &exatas[x].cod_cat);
            printf("nome do autor ALTERADO:\n");
            scanf("%s", &exatas[x].nomea);
            printf("editora ALTERADO:\n");
            scanf("%s", &exatas[x].edit);
            printf("livro foi doado (ALTERADO)? (1-para sim, 2-para nao)\n");
            scanf("%d", &exatas[x].doado);
            printf("numero de paginas ALTERADO:\n");
            scanf("%d", &exatas[x].npag);
            printf("livro ALTERADO atrelado a ciencias exatas ALTERADO\n");
            printf("\n");
        }
    }
}

void alteracaoAreaHumanas(Biblioteca humanas[]){
    int aux=escolhaCodCat();
    for(int x=0;x<VOLUME;x++){
        if(aux==humanas[x].cod_cat){
            printf("\n");
            printf("nome do livro ALTERADO:\n");
            scanf("%s", &humanas[x].nomeo);
            printf("o codigo de catalogacao ALTERADO:\n");
            scanf("%d", &humanas[x].cod_cat);
            printf("nome do autor ALTERADO:\n");
            scanf("%s", &humanas[x].nomea);
            printf("editora ALTERADO:\n");
            scanf("%s", &humanas[x].edit);
            printf("livro foi doado (ALTERADO)? (1-para sim, 2-para nao)\n");
            scanf("%d", &humanas[x].doado);
            printf("numero de paginas ALTERADO:\n");
            scanf("%d", &humanas[x].npag);
            printf("livro ALTERADO atrelado a ciencias humanas ALTERADO\n");
            printf("\n");
        }
    }
}

void alteracaoAreaBiomedicas(Biblioteca biomedicas[]){
    int aux=escolhaCodCat();
    for(int x=0;x<VOLUME;x++){
        if(aux==biomedicas[x].cod_cat){
            printf("\n");
            printf("nome do livro ALTERADO:\n");
            scanf("%s", &biomedicas[x].nomeo);
            printf("o codigo de catalogacao ALTERADO:\n");
            scanf("%d", &biomedicas[x].cod_cat);
            printf("nome do autor ALTERADO:\n");
            scanf("%s", &biomedicas[x].nomea);
            printf("editora ALTERADO:\n");
            scanf("%s", &biomedicas[x].edit);
            printf("livro foi doado (ALTERADO)? (1-para sim, 2-para nao)\n");
            scanf("%d", &biomedicas[x].doado);
            printf("numero de paginas ALTERADO:\n");
            scanf("%d", &biomedicas[x].npag);
            printf("livro ALTERADO atrelado a ciencias biomedicas ALTERADO\n");
            printf("\n");
        }
    }
}

void excluirAreaExatas(Biblioteca exatas[]){
    int aux=escolhaCodCat();
    for(int x=0;x<VOLUME;x++){
        if(aux==exatas[x].cod_cat){
            printf("\n");
            printf("LIVRO EXCLUIDO\n");
            exatas[x].cod_cat=0;
            exatas[x].doado=0;
            printf("\n");
        }
    }
}

void excluirAreaHumanas(Biblioteca humanas[]){
    int aux=escolhaCodCat();
    for(int x=0;x<VOLUME;x++){
        if(aux==humanas[x].cod_cat){
            printf("\n");
            printf("LIVRO EXCLUIDO\n");
            humanas[x].cod_cat=0;
            humanas[x].doado=0;
            printf("\n");
        }
    }
}

void excluirAreaBiomedicas(Biblioteca biomedicas[]){
    int aux=escolhaCodCat();
    for(int x=0;x<VOLUME;x++){
        if(aux==biomedicas[x].cod_cat){
            printf("\n");
            printf("LIVRO EXCLUIDO\n");
            biomedicas[x].cod_cat=0;
            biomedicas[x].doado=0;
            printf("\n");
        }
    }
}

void finalizarPrograma(){ 
    printf("\nPROGRAMA FINALIZADO\n");
}

int main (){
    Biblioteca exatas[VOLUME];
    Biblioteca humanas[VOLUME];
    Biblioteca biomedicas[VOLUME];
    int loop=1;
    int catalogacao=0;
    int area=0;
    char nome[100];
    int case3aux;
    int case3aux1;
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
                    printf("\ndigite o codigo de catalogacao para consultar o livro (-1 para finalizar):\n");
                    scanf("%i", &catalogacao);
                    if(catalogacao==-1) loop=1;
                    else{ 
                        switch(escolhaArea()){
                            case 1:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao==exatas[x].cod_cat){
                                        printf("nome do livro: %s\n", exatas[x].nomeo);
                                        printf("o codigo de catalogacao: %d\n", exatas[x].cod_cat);
                                        printf("nome do autor: %s\n", exatas[x].nomea);
                                        printf("editora: %s\n", exatas[x].edit);
                                        printf("livro foi doado? %i (1-para sim, 2-para nao)\n", exatas[x].doado);
                                        printf("numero de paginas: %d\n", exatas[x].npag);
                                        printf("livro atrelado a ciencias exatas\n");
                                    }
                                }
                            break;
                            case 2:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao==humanas[x].cod_cat){
                                        printf("nome do livro: %s\n", humanas[x].nomeo);
                                        printf("o codigo de catalogacao: %d\n", humanas[x].cod_cat);
                                        printf("nome do autor: %s\n", humanas[x].nomea);
                                        printf("editora: %s\n", humanas[x].edit);
                                        printf("livro foi doado? %i (1-para sim, 2-para nao)\n", humanas[x].doado);
                                        printf("numero de paginas: %d\n", humanas[x].npag);
                                        printf("livro atrelado a ciencias humanas\n");
                                    }
                                }
                            break;
                            case 3:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao==biomedicas[x].cod_cat){
                                        printf("nome do livro: %s\n", biomedicas[x].nomeo);
                                        printf("o codigo de catalogacao: %d\n", biomedicas[x].cod_cat);
                                        printf("nome do autor: %s\n", biomedicas[x].nomea);
                                        printf("editora: %s\n", biomedicas[x].edit);
                                        printf("livro foi doado? %i (1-para sim, 2-para nao)\n", biomedicas[x].doado);
                                        printf("numero de paginas: %d\n", biomedicas[x].npag);
                                        printf("livro atrelado a ciencias biomedicas\n");
                                    }
                                }
                            break;
                        }
                    }
                }
                break;
            //LETRA C
            case 3:
                loop=3;
                while(loop==3){ 
                    printf("\ndigite o NOME DA OBRA para consultar o livro:\n");
                    scanf("%s", &nome);
                    printf("\ndigite 1 para continuar ou -1 para finalizar\n");
                    scanf("%i", &case3aux1);
                    if (case3aux1==-1) loop=1;
                    else {switch(escolhaArea()){
                        case 1:
                            for(int x=0;x<VOLUME;x++){
                                case3aux=strcmp(nome, exatas[x].nomeo);
                                if(case3aux==0){
                                    printf("nome do livro: %s\n", exatas[x].nomeo);
                                    printf("o codigo de catalogacao: %d\n", exatas[x].cod_cat);
                                    printf("nome do autor: %s\n", exatas[x].nomea);
                                    printf("editora: %s\n", exatas[x].edit);
                                    printf("livro foi doado? %i (1-para sim, 2-para nao)\n", exatas[x].doado);
                                    printf("numero de paginas: %d\n", exatas[x].npag);
                                    printf("livro atrelado a ciencias exatas\n");
                                }
                            }
                            break;
                        case 2:
                            for(int x=0;x<VOLUME;x++){
                                case3aux=strcmp(nome, humanas[x].nomeo);
                                if(case3aux==0){
                                    printf("nome do livro: %s\n", humanas[x].nomeo);
                                    printf("o codigo de catalogacao: %d\n", humanas[x].cod_cat);
                                    printf("nome do autor: %s\n", humanas[x].nomea);
                                    printf("editora: %s\n", humanas[x].edit);
                                    printf("livro foi doado? %i (1-para sim, 2-para nao)\n", humanas[x].doado);
                                    printf("numero de paginas: %d\n", humanas[x].npag);
                                    printf("livro atrelado a ciencias humanas\n");
                                }
                            }
                            break;
                        case 3:
                            for(int x=0;x<VOLUME;x++){
                                case3aux=strcmp(nome, biomedicas[x].nomeo);
                                if(case3aux==0){
                                    printf("nome do livro: %s\n", biomedicas[x].nomeo);
                                    printf("o codigo de catalogacao: %d\n", biomedicas[x].cod_cat);
                                    printf("nome do autor: %s\n", biomedicas[x].nomea);
                                    printf("editora: %s\n", biomedicas[x].edit);
                                    printf("livro foi doado? %i (1-para sim, 2-para nao)\n", biomedicas[x].doado);
                                    printf("numero de paginas: %d\n", biomedicas[x].npag);
                                    printf("livro atrelado a ciencias biomedicas\n");
                                }
                            }
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
}   