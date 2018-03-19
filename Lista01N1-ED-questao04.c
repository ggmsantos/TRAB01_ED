/*
	Função: Ler a velocidade em Km/h e converter para m/s
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  float km, ms;

  printf("Informe a velocidade em Km/h:\n");
  scanf("%f", &km);

  ms = (km / 3.6);

  printf("A velocidade em m/s: %.2f\n", ms);
  return 0;
}
