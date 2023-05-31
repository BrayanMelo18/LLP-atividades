#include <stdio.h>
#include <math.h>

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido\n");
    } else {
        printf("O número digitado foi: %d\n", numero);
        
        if (numero > 0) {
            double logaritmo = log(numero);
            printf("O logaritmo do número é: %f\n", logaritmo);
        }
    }

    return 0;
}
