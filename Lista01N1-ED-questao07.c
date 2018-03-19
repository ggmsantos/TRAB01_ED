/*
	Função: Ler o valor em reais e imprimi seu valor em dolares, sendo que o dolar será 3.12
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  float real, dolar;

  printf("Informe o valor em reais para conversao:\n");
  scanf("%f", &real);

  dolar = (real / 3.12);

  printf("R$%.2f convertidos em dolares fica U$ %2.f\n", real, dolar);

  return 0;
}
