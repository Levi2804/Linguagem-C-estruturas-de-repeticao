#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 500;
	printf("Contagem decrescente de 500 até 0:\n\n");
	while(i >= 0){
		printf("%i  ", i);
		i--;
	}	
	return(0);
}
