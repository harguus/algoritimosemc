#include <stdio.h>
#include <stdlib.h>
#include "lista_numeros.h"

struct ListaNumero * inicio = NULL;

/* Insere numero no início da lista * retorna 1 se a inserção ocorrer sem problemas, -1 caso contrário */

int inserirInicio (int numero){
  struct ListaNumero * novo;
  int retorno = 1;
        novo = (struct ListaNumero * ) malloc(sizeof(struct ListaNumero));
        if (novo == NULL) {
            /* Verifica se a memória foi alocada */
            retorno = -1;
        } else {
            novo->numero = numero;
            novo->proximo = inicio;
            inicio = novo;
        }
        return retorno;
    }
/* Insere numero no fim da lista */
int inserirFim(int numero) {
        struct ListaNumero * novo, * ultimo;
        int retorno = 1;
        novo = (struct ListaNumero * ) malloc(sizeof(struct ListaNumero));
        if (novo == NULL) {
            /* Verifica se a memória foi alocada */
            retorno = -1;
        } else {
            novo->numero = numero;
            novo->proximo = NULL;
            /* O novo é o fim da lista */
            if (inicio == NULL) {
            /* Se a lista estiver vazia */
            inicio = novo;
                /* o novo será o único elemento da lista */
            } else {
                /* Se ja houver elementos na lista */
                /* Percorre a lista para encontrar o último elemento */
                ultimo = inicio;
                while (ultimo->proximo != NULL)
                    ultimo = ultimo->proximo;
                ultimo->proximo = novo;
                /* Atualiza referência do último */
            }
        }
        return retorno;
    }
    /* Remove o número do início da lista
     * retorna 1 se a remoção ocorrer sem problemas, -1 caso contrário
     */
int removeInicio() {
        struct ListaNumero * velho;
        int retorno = 1;
        velho = inicio;
        if ( velho == NULL) {
            retorno = -1;
        } else {
            inicio = inicio->proximo;
            free(velho);
        }
        return retorno;
    }
    /*Remove o número do fim da lista
     * retorna 1 se a remoção ocorrer sem problemas, -1 caso contrário
     */
int removeFim() {
    struct ListaNumero * ultimo, * anterior;
    ultimo = inicio;
    if (ultimo == NULL) {
      return -1;
    } else{
      if (inicio->proximo == NULL) {
        inicio = NULL;
      }
      else{
        while (ultimo->proximo != NULL) {
          anterior = ultimo;
          ultimo = ultimo->proximo;
        }
        anterior->proximo = NULL;
        free(ultimo);
      }
    }
      return 1;
    }
    /* Busca numero na lista
     * retorna 1 se ele estiver na lista, -1 caso contrário.
     */
int buscaNumero(int numero) {
        struct ListaNumero * atual;
        int retorno = -1;
        atual = inicio;
        while(atual != NULL) {
            if (atual->numero == numero){
                retorno = 1;
                break;
            }
            atual = atual->proximo;
        }
        return retorno;
    }
    /* Conta quantidade de elementos na lista
     */
int quantidade(){
      struct ListaNumero * proximo;
      int quantidade = 1;
      proximo = inicio;

      if (inicio == NULL) {
        return 0;
      } else{
        if (inicio->proximo == NULL) {
          return 1;
        }
        else{
          while (proximo->proximo != NULL) {
            proximo = proximo->proximo;
            quantidade++;
          }
          return quantidade;
        }
      }
      return -1;
    }
    /* Coloca no parâmetro 'int * numero' o primeiro número da lista
     * retorna 1 se o número existir, -1 caso a lista esteja vazia.
     */
int primeiro(int * numero) {
    if (inicio == NULL) {
      return -1;
    } else{
        numero = inicio->numero;
        return 1;
      }
        return -1;
    }

/* Coloca no parâmetro 'int * numero' o último número da lista
 * retorna 1 se o número existir, -1 caso a lista esteja vazia.
 */
int ultimo(int * numero) {
        return -1;
    }
    /*
     * Mostra todos os números da lista, um por linha
     */
void mostraNumeros() {
    struct ListaNumero * atual;
      atual = inicio;
      printf("Lista de todos os números cadastrados\n\n");
      while (atual != NULL) {
          printf(" %d\n", atual->numero);
          atual = atual->proximo;
    }
}
