/*
	Função: Recebe um número inteiro em segundos e imprime suas horas, minutos e segundos
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){
	int h, m, s;

	printf("Informe os segundos:");
	scanf("%d", &s);

	h = (s / 3600);
	m = (s - (3600 * h)) / 60;
	s = (s - (3600 * h) - (m * 60));

	printf("Em horas: %dh\nEm minutos: %dm\nEm segundos: %ds\n", h, m, s);

	return 0;
}
