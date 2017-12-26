/*
* Bubble Sort
* Algorítimo de Ordenação
* Thiago Cristiano Tavares
* IFRN - 25/12/2017
* ANSI C
*/

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int vetor[5] = {1,5,8,2,7}, i, j, k, temp = 0;

  for (i = 0; i < 5; i++) {
    for (j = 0; j < 4; j++) {
        if (vetor[j] > vetor[j+1]) {
          temp = vetor[j];
          vetor[j] = vetor[j+1];
          vetor[j+1] = temp;
        }
    }
  }

  for (k = 0; k < 5; k++) {
    printf("%d\n", vetor[k]);
  }

  return 0;
}
