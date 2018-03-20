/*
	Função: Calcular e imprimir a area de um triangulo
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  float base, altura, area;

  printf("Informe a base em metros:\n");
  scanf("%f", &base);

  printf("Informe a altura em metros:\n");
  scanf("%f", &altura);

  area = (base * altura) / 2;

  printf("A area do triangulo: %2.f\n", area);
  return 0;
}
