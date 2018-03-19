/*
	Função: Recebe 5 valores inteiros e mostra sua media que não pode ser inteira
	Autor: Gabriel Maciel dos Santos
	Data: 11/03/18
*/

int main(){

    int num1, num2, num3, num4, num5;
    float media;

    printf("Digite 5 valores inteiros:"\n);
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    media = (num1 + num2 + num3 + num4 + num5) / 5;

    printf("A media dos 5 valores: %.2f", media);

  return 0;
}
