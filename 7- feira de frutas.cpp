#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int fruta;
	char auxiliar;
	
	do{
		printf ("---------- Bem-vindo (a) a feira de frutas! Seguem as op��es que n�s temos:\n");
		printf("\n|1| - Abacaxi  |2|- Ma��   |3|- Pera\n");
		printf("Digite o n�mero referente a sua escolha: ");
		scanf("%d", &fruta);
			fflush(stdin);
		if (fruta == 0)
		  printf ("Essa fruta n�o consta no nosso sistema, tente novamente!");
		  else {
		  	switch (fruta){
		  		case 1: printf ("Abacaxi!", fruta); break; 
		  		case 2: printf ("Ma��!", fruta); break;
		  		case 3: printf ("Pera!", fruta); break;
				default: printf("Essa fruta n�o consta no nosso sistema, tente novamente!");  	
			  }
			}
			do{
				printf("\nGostaria de escolher uma nova fruta? |s| - sim ou |n|- n�o: ");
				scanf ("%c", &auxiliar); 
				fflush(stdin);
		        auxiliar = tolower(auxiliar);
		        if (auxiliar != 's' && auxiliar != 'n')
		           printf("INV�LIDO!");
			} while (auxiliar != 's' && auxiliar != 'n');	
	
	} while (auxiliar == 's');
	
	return 0;
}
