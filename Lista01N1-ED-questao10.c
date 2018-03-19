/*
	Função: Ler dois valores reais e exibir o primeiro com acrescimo de 30% e o segundo com um desconto de 25%
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  float num1, num2;

  printf("Informe os dois valores:\n");
  scanf("%f %f", &num1, &num2);

  num1 = (num1 + (num1 * 0.30));
  num2 = (num2 - (num2 * 0.25));

  printf("O valor do primeiro com acrescimo: %2.f\n", num1);
  printf("O valor do segundo com acrescimo: %2.f\n", num2);

  return 0;
}
