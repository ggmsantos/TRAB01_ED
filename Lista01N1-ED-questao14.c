/*
	Função: Informar a media aritmetica, a media harmonica, media geometrica e a media quadratica
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>
#include <math.h>

int main(){

  float num1, num2, num3, num4, ma, mh, mg, mq;
  printf("Informe 4 valores:\n");
  scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

  ma = (num1 + num2 + num3 + num4) / 4;
  mh = 4 / ((1/num1) + (1/num2) + (1/num3) + (1/num4));
  mg = pow((num1 * num2 * num3 * num4), 1/4);
  mq = sqrt((num1 * num1) + (num2 * num2) + (num3 * num3) + (num4 * num4));

  printf("A media aritmetica: %.2f\nMedia harmonica: %.2f\nMedia geometrica: %.2f\nMedia quadratica: %.2f\n", ma, mh, mg, mq);
}
