#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float n1, n2, n3, m;
	for(i = 0; i <= 10; i++){
		printf("=======================");
		printf("\nDigite a 1� nota: ");
		scanf("%f", &n1);
		printf("Digite a 2� nota: ");
		scanf("%f", &n2);
		printf("Digite a 3� nota: ");
		scanf("%f", &n3);
		m = (n1 + n2 + n3)/3;
		if(m >= 9){
			printf("\nM�dia %.1f e conceito A\n", m);
		} else if(m >= 7 && m < 9){
			printf("\nM�dia %.1f e conceito B\n", m);
		} else if(m >= 6 && m < 7){
			printf("\nM�dia %.1f e conceito C\n", m);
		} else if(m >= 4 && m < 6){
			printf("\nM�dia %.1f e conceito D\n", m);
		} else{
			printf("\nM�dia %.1f e conceito E\n", m);
		}
	}
	return(0);
}
