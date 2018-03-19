/*
	Função: Calcular e imprimir o salario liquido de um professor
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  float valor_hora, num_aula, desconto, valor;

  printf("Informe o valor da hora de aula:\n");
  scanf("%f", &valor_hora);

  printf("Numero de aulas dadas no mes:\n");
  scanf("%f", &num_aula);

  printf("Porcentagem de desconto do INSS:\n");
  scanf("%f", &desconto);

  valor = (valor_hora * num_aula);
  valor = valor - ((valor * desconto) / 100);

  printf("O salario do professor: %2.f\n", valor);

	return 0;
}
