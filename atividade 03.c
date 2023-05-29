#include <stdio.h>

struct Dados {
    int numero;
    char nome[50];
    float valor;
};

int main() {
    struct Dados dados;

    printf("Digite o número: ");
    scanf("%d", &dados.numero);

    printf("Digite o nome: ");
    scanf("%s", dados.nome);

    printf("Digite o valor: ");
    scanf("%f", &dados.valor);

    FILE *arquivo = fopen("dados.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!");
        return 1;
    }

    fprintf(arquivo, "Número: %d\n", dados.numero);
    fprintf(arquivo, "Nome: %s\n", dados.nome);
    fprintf(arquivo, "Valor: %.2f\n", dados.valor);

    fclose(arquivo);

    printf("Estrutura gravada no arquivo com sucesso!\n");

    return 0;
}