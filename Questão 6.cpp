#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, fat=1;
	printf("Digite um n�mero inteiro: ");
	scanf("%i", &n);
	if(n >= 0){
		for(i = 1; i <= n; i++){
			fat *= i;
		}
		printf("\n%i! = %i", n, fat);
	} else{
		printf("\nN�o existe fatorial de n�mero negativo.");
	}
	return(0);
}
