/*
	Função: Imprima o quadrado de todos os inteiros até um número N informado pelo usuário
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>
#include <math.h>

int main(){

  int num, i;

  printf("Digite um numero:\n");
  scanf("%d", &num);

  for (i = 1; i <= num; i++){
    printf("%d = %g\n", i, pow(i,2));
  }

  return 0;
}
