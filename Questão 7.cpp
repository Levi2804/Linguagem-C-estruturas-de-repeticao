#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL,"Portuguese");
	int i, fat, cont;
	for(i = 1; i <= 11; i++){
		if(i % 2 != 0){
			fat = 1;
			for(cont = 1; cont <= i; cont++){
				fat *= cont;
			}
			printf("O fatorial de %i é %i\n", i, fat);
		}	
	}
	return(0);
}
