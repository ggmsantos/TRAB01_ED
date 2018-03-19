  /*
  	Função: Calcular o IMC
  	Autor: Gabriel Maciel dos Santos
  	Data: 11/03/18
  */

  #include <stdio.h>
  #include <math.h>

  int main(){

    float peso, altura, imc;

  	printf("Digite seu peso em quilogramas:");
  	scanf("%f", &peso);

  	printf("Digite sua altura em metros:");
  	scanf("%f", &altura);

  	imc = peso / pow(altura,2);

  	if (imc < 18.5){
  		printf("Abaixo do peso\nIMC:%f\n", imc);
  	} else {
  		if (imc >= 18.5 && imc < 25){
  			printf("Normal\nIMC:%f\n", imc);
  		} else {
  			if (imc >= 25 && imc < 30){
  				printf("Acima do peso\nIMC:%f\n", imc);
  			} else {
  				if (imc >= 30){
  					printf("Obeso\nIMC: %f\n", imc);
  				}
  			}
  		}
  	}

    return 0;
  }
