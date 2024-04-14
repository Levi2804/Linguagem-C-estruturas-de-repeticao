#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i, cont = 0;
	printf("O total de números divisíveis por 2 existentes no intervalo de 10 a 50:\n\n");
	for(i = 10; i <= 50; i++){
		if(i % 2 == 0){
			printf("%i  ", i);
			cont++;
		}
	}
	printf("\nTotal: %i", cont);
	return(0);
}
