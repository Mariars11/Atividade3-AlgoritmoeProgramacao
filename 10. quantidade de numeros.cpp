#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 0, num;
	
	do{
		printf("Digite o n�mero: ");
		scanf("%d", &num);
		fflush(stdin);
		
		i++;
	}while(num >= 0 && i < 100);
	
	printf("A quantidade de n�meros informados foi %d.", i);
	
	return 0;
}
