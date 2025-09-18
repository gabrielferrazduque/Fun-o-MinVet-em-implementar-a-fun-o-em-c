#include <stdio.h>
#include <stdlib.h>

// Função que retorna o menor valor do vetor
float min_vet(float *v, int n) {
    float menor = v[0]; // assume o primeiro elemento como menor
    for (int i = 1; i < n; i++) {
        if (v[i] < menor) {
            menor = v[i]; // atualiza o menor se encontrar outro menor
        }
    }
    return menor;
}

int main() {
    int n;
    float *v;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    // Alocação dinâmica
    v = (float*) malloc(n * sizeof(float));
    if (v == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    // Leitura dos elementos do vetor
    for (int i = 0; i < n; i++) {
        printf("Digite o valor da posição %d: ", i);
        scanf("%f", &v[i]);
    }

    // Chamada da função
    float menor = min_vet(v, n);
    printf("\nO menor valor do vetor é: %.2f\n", menor);

    // Liberação da memória
    free(v);

    return 0;
}
