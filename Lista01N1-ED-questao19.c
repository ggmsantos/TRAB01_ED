/*
	Função: Calcular H sendo que N é informado pelo usuario
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  float num, h;
  h = 0;

  printf("Digite um numero:");
  scanf("%f", &num);

  while (num > 0){
      h = h + 1/num;
      h--;
  }

  printf("%f\n", h);

  return 0;
}
