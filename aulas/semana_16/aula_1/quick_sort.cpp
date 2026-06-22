#include <iostream>

using namespace std;

int particao(int * vetor, int menor, int maior) {
    int pivo = vetor[menor];
    int limite_esquerda = menor + 1;

    for (int i = menor + 1; i < maior; i++) {
        if (vetor[i] < pivo) {
            int aux = vetor[i];
            vetor[i] = vetor[limite_esquerda];
            vetor[limite_esquerda] = aux;
            limite_esquerda++;
        }
    }
    // Troca o pivô com o último elemento menor que ele
    int aux = vetor[menor];
    vetor[menor] = vetor[limite_esquerda - 1];
    vetor[limite_esquerda - 1] = aux;

    return limite_esquerda - 1;
}

void quick_sort(int * vetor, int menor, int maior) {
    if (menor < maior) {
        int indice_pivo = particao(vetor, menor, maior);
        quick_sort(vetor, menor, indice_pivo);
        quick_sort(vetor, indice_pivo + 1, maior);
    }
}

int main() {
    int vetor[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    quick_sort(vetor, 0, 10);

    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}