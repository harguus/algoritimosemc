#include <stdio.h>
#ifndef TAM
#define TAM 10
#endif

int main(int argc, char const *argv[]) {
  int min = 0, num, meio, max = TAM-1, vetor[TAM] = {0,1,2,3,4,5,6,7,8,9};

  printf("Digite um número de 0 a 9\n");
  scanf("%d", &num);

  while (min <= max) {
    meio = (min + max)/2;
    if (vetor[meio] == num){
      printf("Elemento %d encontrado\n", num);
    }if (vetor[meio] < num){
      min = meio + 1;
    } else{
      max = meio - 1;
    }
  }

  return 0;
}
