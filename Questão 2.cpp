#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int i = 1, s = 0;
	while(i <= 500){
		if(i % 2 == 0){
			s += i;
		}
		i++;
	}	
	printf("O somat�rio dos valores pares de 1 a 500 �:\n%i", s);
	return(0);
}
