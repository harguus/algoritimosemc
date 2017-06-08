#include <stdio.h>

int fatorial(int numero){
  if (numero == 0) {
    return 1;
    printf("fim porque é 0\n");
  }else{
    printf("%d * %d-1 = %d\n", numero, numero, numero-1);
    return numero * fatorial(numero - 1);
  }
}

int main(int argc, char const *argv[]) {
  int numero = 0;

  printf("digite um número: ");
  scanf("%d", &numero);

  printf("Fatorial de %d é: %d\n", numero, fatorial(numero));

  return 0;
}
