/*
	Função: Calcular e imprimir a area de um triangulo retangulo com a formular de heron
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>
#include <math.h>

int main(){
  float a, b, c, s, area;

  printf("Informe os lados A, B e C do triangulo:\n");
  scanf("%f %f %f", &a, &b, &c);

  s = (a + b + c) / 2;
  area = sqrt(s * (s - a) * (s - b) * (s - c));

  printf("Area: %.2f\n", area);
}
