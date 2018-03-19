/*
	Função: Imprime o cubo de todos os inteiros de um N informado pelos usuaarios
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/
#include <stdio.h>
#include <math.h>

int main(){

  int num, i;

  printf("Digite um numero:\n");
  scanf("%d", &num);

  for (x = 1; i <= num; i++){
    printf("%d = %g\n", i, pow(i,3));
  }

  return 0;
}
