#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i;
	for(i = 0; i <= 10; i++){
		printf("Digite sua idade: ");
		scanf("%i", &n);
		if(n >= 18){
			printf("\nVoc� � maior de idade!");
		} else{
			printf("\nVoc� � menor de idade!");
		}
		printf("\n==========================\n");
	}
	return(0);
}
