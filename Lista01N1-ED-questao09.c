/*
	Função: Ler dois valores e informar o dividendo, divisor, quoficiente e o resto dele
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){
  int num1, num2, dividendo, divisor, quoficiente, resto;

  printf("Digite dois numeros:\n");
  scanf("%d %d", &num1, &num2);

  dividendo = num1;
  divisor = num2;
  quoficiente = num1 / num2;
  resto = num1 % num2;

  printf("O dividendo: %d\nO divisor: %d\nO quoficiente: %d\nO resto: %d\n", dividendo, divisor, quoficiente, resto);
  
  return 0;
}
