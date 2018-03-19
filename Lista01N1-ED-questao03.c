/*
	Função: Calculo da hipotenusa com dois valores a e b informados pelo usuario
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>
#include <math.h>

int main(){

  float a, b, h;

  printf("Informe os valores de A e B:\n");
  scanf("%f %f", &a, &b);

  h = (sqrt(pow(a,2) + pow(b,2)));
  printf("Hipotenusa: %.2f\n", h);

  return 0;
}
