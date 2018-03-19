/*
	Função: Calcular o desconto dependendo do tipo de combustivel usado no carro
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio.h>

int main(){

	float valor_inicial, valor_final, desconto;

	printf("Informe o preco do veiculo:");
	scanf("%f", &valor_inicial);

	while (valor_inicial != 0){

		printf("Informe o tipo do carro:\n1- Alcool\n2- Gasolina\n3- Diesel\n");
		scanf("%f", &desconto);

		if (desconto == 1){

			valor_final = (valor_inicial * 28) / 100;
			printf("O valor do desconto R$ %.2f\n", valor_final);

			valor_final = valor_inicial - valor_final;
			printf("O valor final: R$ %.2f\n", valor_final);

		} else {

			if (desconto == 2){

				valor = (valor_inicial * 22) / 100;
				printf("O valor do desconto eh de R$ %.2f\n", valor_final);

				valor_final = valor_inicial - valor_final;
				printf("O valor final: R$ %.2f\n", valor_final);

			} else {
				if (desconto == 3){

					valor_final = (valor_inicial*12)/100;
					printf("O valor do desconto R$ %.2f\n", valor_final);

					valor_final = valor_inicial - valor_final;
					printf("O valor final: R$ %.2f\n", valor_final);

				} else {
					printf("Opcao invalida!\n");
				}
			}
		}
    
		printf("Informe o preco do veiculo:");
		scanf("%f", &valor_inicial);
	}

	return 0;
}
