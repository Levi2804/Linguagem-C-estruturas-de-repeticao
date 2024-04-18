#include <stdio.h>
#include <locale.h>

// Valor mínimo aceitável para n
#define MIN_N 0

int main() {
    setlocale(LC_ALL, "Portuguese");

    int n, i, fatorial = 1;

    // Solicita ao usuário que digite um número inteiro
    printf("Digite um número inteiro não negativo: ");
    scanf("%i", &n);

    // Verifica se o número é não negativo
    if (n >= MIN_N) {
        // Calcula o fatorial de n
        for (i = 1; i <= n; i++) {
            fatorial *= i;
        }
        // Exibe o resultado
        printf("\n%i! = %i\n", n, fatorial);
    } else {
        // Exibe uma mensagem de erro se o número for negativo
        printf("\nNão existe fatorial de número negativo.\n");
    }

    return 0;
}
