# Fun-o-MinVet-em-implementar-a-fun-o-em-c
implementar a função
#include <stdio.h>   
#include <stdlib.h>


float min_vet(float vet[], int n) {
    float menor = vet[0];  // assume o primeiro como menor inicialmente
    for (int i = 1; i < n; i++) {
        if (vet[i] < menor) { 

    v = (float*) malloc(n*sizeof(float));

            menor = vet[i]; // atualiza se achar um valor menor
        }
    }
    return menor;
}

int main() {
    float vetor[] = {3.5, -1.2, 7.8, 0.4, -5.6};
    int tamanho = malloc()= sizeof(vetor) / malloc()=sizeof(vetor[0]);

    float menor = min_vet(vetor, tamanho); 
    v = (float*) malloc(n*sizeof(float));
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
    }    v = (float*) malloc(n*sizeof(float));

    printf("O menor valor do vetor é: %.2f\n", menor); 

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
