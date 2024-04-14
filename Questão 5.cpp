#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i;
	float n1, n2, n3, m;
	for(i = 0; i <= 10; i++){
		printf("=======================");
		printf("\nDigite a 1ª nota: ");
		scanf("%f", &n1);
		printf("Digite a 2ª nota: ");
		scanf("%f", &n2);
		printf("Digite a 3ª nota: ");
		scanf("%f", &n3);
		m = (n1 + n2 + n3)/3;
		if(m >= 9){
			printf("\nMédia %.1f e conceito A\n", m);
		} else if(m >= 7 && m < 9){
			printf("\nMédia %.1f e conceito B\n", m);
		} else if(m >= 6 && m < 7){
			printf("\nMédia %.1f e conceito C\n", m);
		} else if(m >= 4 && m < 6){
			printf("\nMédia %.1f e conceito D\n", m);
		} else{
			printf("\nMédia %.1f e conceito E\n", m);
		}
	}
	return(0);
}
