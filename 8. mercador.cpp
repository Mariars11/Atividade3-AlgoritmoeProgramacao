#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, quantProd;
	char auxiliar, nomeProd[10];
	float preco;
	
	printf("Para come�ar, informe a quantidade de produtos: ");
	scanf("%d", &quantProd);
	fflush(stdin);
	
	for (i = 1; i <= quantProd; i++){	
		if (i < quantProd){
	        printf("\nQual o nome do produto %d? ",i);
		    fgets(nomeProd, 10, stdin);
			fflush(stdin);
	    
	    	printf("Qual o pre�o desse produto %d? ", i);
	    	scanf("%f", &preco);
	    	fflush(stdin);
			printf("\nO produto %spassou a custar %.2f!\n", nomeProd, preco * 1.1);
	 
		   
			printf("\nDeseja informar outro produto? |S| - sim |N| - n�o: ");
			scanf("%c", &auxiliar);
			fflush(stdin); 
			auxiliar = toupper(auxiliar);
	}
        else
		    printf("Por padr�o o pre�o do �ltimo produto possui valor igual a -1");
		if(auxiliar == 'N') {
			i = quantProd;
		}
	}

	return 0;
}
