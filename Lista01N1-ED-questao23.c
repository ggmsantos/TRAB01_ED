/*
	Função: Calcular o desconto dependendo do tipo de combustivel usado no carro
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>
#include <math.h>

int main(){

  int tempo, x, hora, minuto, segundo;
  float massa, massa_final;

  tempo = 0;
  x = 0;

	scanf("%f", &massa);
	massa_final = massa;

	while (massa_final >= 0.5){

		massa_final = massa_final  /2;
    tempo = tempo + 50;
	}

	hora = tempo / 3600;
  x = tempo % 3600;
  minuto = x / 60;
  segundo = aux % 60;

	printf("MASSA INICIAL = %.2f\nMASSA FINAL = %.2f\nTEMPO = %dH %dM %dS\n", massa, massa_final, hora, minuto, segundo);

	return 0;
}
