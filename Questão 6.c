#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, fat=1;
	printf("Digite um número inteiro: ");
	scanf("%i", &n);
	if(n >= 0){
		for(i = 1; i <= n; i++){
			fat *= i;
		}
		printf("\n%i! = %i", n, fat);
	} else{
		printf("\nNão existe fatorial de número negativo.");
	}
	return(0);
}
