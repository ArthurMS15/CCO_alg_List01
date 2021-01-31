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

int main (){
    Biblioteca exatas[VOLUME];
    Biblioteca humanas[VOLUME];
    Biblioteca biomedicas[VOLUME];
    int var;
    int area;
    int case3aux;
    char nome1[100];
    int catalogacao;
    int catalogacao1;
    int catalogacao2;
    int area1;
    int area2;
    int area3;
    int area4;
    int area5;
    int area6;
    int loop=1;
    while(loop==1){ 
        printf("NAO USE ESPACAMENTO\n");
        printf("\nDigite o determinado numero para fazer uma das acoes:\n");
        printf("\n");
        printf("1 - registrar todos os livros de uma area\n");
        printf("2 - consultar por codigo e area\n");
        printf("3 - consultar por nome e area\n");
        printf("4 - ver livros que foram doados\n");
        printf("5 - ver livros comprados que possuem entre 100 a 300 paginas\n");
        printf("6 - alterar um registro pelo codigo, area e outras info\n");
        printf("7 - excluir um livro pelo codigo e area\n");
        printf("8 - para finalizar o programa\n");
        printf("\n");
        scanf("%d", &var);
        switch(var){
            //LETRA A
            case 1:
                printf("\ndigite a area para CADASTRAR TODOS os livros dessa area (1-exatas;2-humanas;3-biomedicas)\n");
                scanf("%d", &area);
                switch(area){ 
                    case 1:
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
                            printf("novo livro de exatas registrado\n");
                        }
                        break;
                    case 2:
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
                        break;
                    case 3:
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
                        printf("digite a area do livro que deseja consultar: (1-exatas;2-humanas;3-biomedicas)\n");
                        scanf("%i", &area1);
                        switch(area1){
                            case 1:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao==exatas[x].cod_cat){
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
                            break;
                            case 2:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao==humanas[x].cod_cat){
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
                            break;
                            case 3:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao==biomedicas[x].cod_cat){
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
                    scanf("%s", &nome1);
                    printf("digite a area do livro que deseja consultar: (1-exatas;2-humanas;3-biomedicas, -1 para finalizar)\n");
                    scanf("%i", &area2);
                    if (area2==-1) loop=1;
                    switch(area2){
                        case 1:
                            for(int x=0;x<VOLUME;x++){
                                case3aux=strcmp(nome1, exatas[x].nomeo);
                                if(case3aux==0){
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
                            break;
                        case 2:
                            for(int x=0;x<VOLUME;x++){
                                case3aux=strcmp(nome1, humanas[x].nomeo);
                                if(case3aux==0){
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
                            break;
                        case 3:
                            for(int x=0;x<VOLUME;x++){
                                case3aux=strcmp(nome1, biomedicas[x].nomeo);
                                if(case3aux==0){
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
                            break;
                    }
                }
                break;
            //LETRA D
            case 4:
                printf("\ndigite a area para ver todos os livros DOADOS (1-exatas;2-humanas;3-biomedicas)\n");
                scanf("%d", &area3);
                switch(area3){
                    case 1:
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
                        break;
                    case 2:
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
                        break;
                    case 3:
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
                        break;
                }
                break;
            //LETRA E
            case 5:
                printf("\ndigite a area para verificar os livros comprados e com 100 a 300 paginas (1-exatas;2-humanas;3-biomedicas)\n");
                scanf("%d", &area4);
                switch(area4){
                    case 1:
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
                        break;
                    case 2:
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
                        break;
                    case 3:
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
                        break;
                }
                break;
            //LETRA F
            case 6:
                printf("\ndigite o codigo de catalogacao para ALTERAR o registro de um livro em especifico (-1 para finalizar):\n");
                    scanf("%i", &catalogacao1);
                    if(catalogacao1==-1) loop=1;
                    else{ 
                        printf("digite a area do livro que deseja ALTERAR: (1-exatas;2-humanas;3-biomedicas)\n");
                        scanf("%i", &area5);
                        switch(area5){
                            case 1:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao1==exatas[x].cod_cat){
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
                                break;
                            case 2:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao1==humanas[x].cod_cat){
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
                                break;
                            case 3:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao1==biomedicas[x].cod_cat){
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
                                break;
                        }
                    }
                break;
            //LETRA G
            case 7:
                 printf("\ndigite o codigo de catalogacao para EXCLUIR o registro de um livro em especifico (-1 para finalizar):\n");
                    scanf("%i", &catalogacao2);
                    if(catalogacao2==-1) loop=1;
                    else{ 
                        printf("digite a area do livro que deseja EXCLUIR: (1-exatas;2-humanas;3-biomedicas)\n");
                        scanf("%i", &area6);
                        switch(area6){
                            case 1:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao2==exatas[x].cod_cat){
                                        printf("\n");
                                        printf("LIVRO EXCLUIDO\n");
                                        exatas[x].cod_cat=0;
                                        printf("\n");
                                    }
                                }
                                break;
                            case 2:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao2==humanas[x].cod_cat){
                                        printf("\n");
                                        printf("LIVRO EXCLUIDO\n");
                                        humanas[x].cod_cat=0;
                                        printf("\n");
                                    }
                                }
                                break;
                            case 3:
                                for(int x=0;x<VOLUME;x++){
                                    if(catalogacao2==biomedicas[x].cod_cat){
                                        printf("\n");
                                        printf("LIVRO EXCLUIDO\n");
                                        biomedicas[x].cod_cat=0;
                                        printf("\n");
                                    }
                                }
                                break;
                        }
                    }
                break;
            case 8:
                printf("\nPROGRAMA FINALIZADO\n");
                return 0;
                break;
        }
    }
}   