/*
	Função: Calcular a distancia entre dois pontos
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>
#include <math.h>

int main(){

  float x1, x2, y1, y2, distancia;

  printf("Informe o ponto A das coordenadas X1 E Y1, e o ponto B das coordenadas de X2, Y2:\n");
  scanf("%f %f %f %f", &x1, &y1, &x2, &y2);

  distancia = sqrt(((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)));
  printf("Distancia entre dois pontos: %2.f\n", distancia);

  return 0;
}
