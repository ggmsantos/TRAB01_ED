/*
	Função: Informa um numero igual ou maior que zero e mostrar todos os divisores de um ate o valor.
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

  int num, i;

  printf("Digite um numero:\n");
  scanf("%d", num);

  while (num >= 0){
    for (i = 1; i <= num; i++){
      if (num % i == 0){
        printf("%d", &i);
      }

      printf("Digite um numero:\n");
      scanf("%d", &num);
      i = 1;
    }
  }

  return 0;
}
