/*
	Função: Ler o preço de um par de sapatos e escrever com o desconto que for informado pelo usuario
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  float preco, desconto;

  printf("Informe o valor do par de sapatos:\n");
  scanf("%f", &preco);
  printf("Informe o valor do desconto:\n");
  scanf("%f", &desconto);

  preco = (preco - ((preco * desconto) / 100));

  printf("O valor com desconto: R$%.2f", preco);



  return 0;
}
