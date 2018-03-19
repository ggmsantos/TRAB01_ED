/*
	Função: Ler o salario de um funcionario e imprimilo com aumento de 12%
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  float salario, valor;

  printf("Informe o salario do funcionario:\n");
  scanf("%f", &salario);

  valor = (salario + (salario * 0.12));

  printf("O salario com aumento sera: %.2f", valor);

  return 0;
}
