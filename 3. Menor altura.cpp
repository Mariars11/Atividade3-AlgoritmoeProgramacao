#include <stdio.h>
#include <locale.h>

int main ()
{
	setlocale(LC_ALL, "Portuguese");
	int i = 0, pessoas = 10, altura, menor;
	while(i != pessoas){
		printf("Informe a altura (em cm) da %d� pessoa: ", i + 1);
		scanf("%d", &altura);
		if(i == 0)
		   menor = altura;
		   if(menor > altura)
		   menor = altura;
		   i++;
	}
	printf("O valor da menor altura �: %dcm", menor);
	return 0;
}
