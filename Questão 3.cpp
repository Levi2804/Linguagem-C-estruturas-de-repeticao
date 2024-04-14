#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i;
	for(i = 0; i <= 10; i++){
		printf("Digite sua idade: ");
		scanf("%i", &n);
		if(n >= 18){
			printf("\nVocê é maior de idade!");
		} else{
			printf("\nVocê é menor de idade!");
		}
		printf("\n==========================\n");
	}
	return(0);
}
