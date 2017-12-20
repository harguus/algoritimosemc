#include <stdio.h>
#include <stdlib.h>
#include "lista_numeros.h"

void printMenu() {
        printf("\n");
        printf("*** Programa exemplo de lista ligada de números inteiros ***\n\n");
        printf("1 - Inserir número no início da lista\n");
        printf("2 - Inserir número do fim da lista\n");
        printf("3 - Remover número no início da lista\n");
        printf("4 - Remover número do fim da lista\n");
        printf("5 - Buscar um número na lista\n");
        printf("6 - Mostra a quantidade de elementos existentes na lista\n");
        printf("7 - Mostra o primeiro número da lista\n");
        printf("8 - Mostra o último número da lista\n");
        printf("9 - Lista todos os números\n");
        printf("\n");
        printf(">>> Digite uma opção, ou 0 (zero) para sair: ");
    }
int main(int argc, char **argv) {
        int fim, opcao, numero;
        fim = 0;
        while (!fim) {
        printMenu();
        scanf("%d", &opcao);
            switch(opcao){
            case 0:
              fim = 1;
              break;
            case 1:
            printf("Digite o número a ser inserido: ");
            scanf("%d", &numero);
                if (inserirInicio(numero) == 1){
                    printf("Numero %d inserido no início da lista\n", numero);
                } else {
                    printf("Erro ao inserir no início da lista\n");
                }
              break;
            case 2:
                printf("Digite uo número a ser inserido: ");
                scanf("%d", &numero);
                if (inserirFim(numero) == 1){
                    printf("Numero %d inserido no fim da lista\n", numero);
                } else {
                    printf("Erro ao inserir no fim da lista\n");
                }
                break;
            case 3:
                if (removeInicio() == 1) {
                    printf("Numero removido no início da lista\n");
                } else {
                    printf("Erro ao remover do início da lista\n");
                }
                break;
            case 4:
                if (removeFim() == 1) {
                    printf("Numero removido no fim da lista\n");
                } else {
                    printf("Erro ao remover do fim da lista\n");
                }
                break;
            case 5:
                printf("Digite uo número a ser buscado na lista: ");
                scanf("%d", &numero);
                if (buscaNumero(numero) == 1) {
                    printf("Numero %d está presente na lista\n", numero);
                } else {
                    printf("A lista não contém o número %d\n", numero);
                }
                break;
            case 6:
                if (quantidade() > 0) {
                  printf("existem %d elementos na lista", quantidade());
                }else{
                  printf("Não há elementos na lista\n\n");
                }
                break;
            case 7:
                if (primeiro(&numero) > 0) {
                  printf("Primeiro número da lista é %d", numero);
                }else{
                  printf("Não há elementos na lista\n\n");
                }
                break;
            case 8:
                printf("Opção não implementada!!!!\n\n");
                break;
            case 9:
                mostraNumeros();
                break;
            default:
                printf("ATENÇÃO: digite uma opção válida!\n");
                break;
            }
        }
        return
        0
        ;
}
