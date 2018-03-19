/*
	Função: Calcular area e o perimetro do retangulo
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  float base, altura, area, perimetro;

  printf("Informe a base em metros:\n");
  scanf("%f", &base);
  printf("Informe a altura em metros:\n");
  scanf("%f", &altura);

  area = (base * altura);
  perimetro = ((base * 2) + (altura * 2));

  printf("Area: %2.f\nPerimetro: %2.f\n", area, perimetro);

  return 0;
}
