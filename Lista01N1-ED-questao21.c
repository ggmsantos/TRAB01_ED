/*
	Função: Receber o numero do mes e mostrar o correspondente
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

#include <stdio,h>

int main(){

  int num;

  printf("Digite o numero do mes:\n");
  scanf("%d", &num);

  if (num == 1){
    printf("Janeiro");
  } else {
    if (num == 2){
      printf("Fevereiro");
    } else {
      if (num == 3){
        printf("Marco");
      } else {
        if (num == 4){
          printf("Abril");
        } else {
          if (num == 5){
            printf("Maio");
          } else {
            if (num == 6){
              printf("Junho");
            } else {
              if (num == 7){
                printf("Julho");
              } else {
                if (num == 8){
                  printf("Agosto");
                } else {
                  if (num == 9){
                    printf("Setembro");
                  } else {
                    if (num == 10){
                      printf("Outubro");
                    } else {
                      if (num == 11){
                        printf("Novembro");
                      } else {
                        if (num == 12){
                          printf("Dezembro");
                        } else {
                          printf("Mes invalido!");
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  return 0;
}
