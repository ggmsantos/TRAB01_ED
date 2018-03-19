/*
	Função: Multiplos de num2 de 1 ate num1, sendo os numeros informados pelo usuario
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  int num1, num2, i;

  printf("Informe dois numeros:\n");
  scanf("%d %d", &num1, &num2);

  for (i = 1; i <= num1; i++){
    if (i % num2 == 0){
      printf("Multiplos: %d\n", i);
    }
  }

  return 0;
}
