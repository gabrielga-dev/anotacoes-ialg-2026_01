#include <iostream>

using namespace std;

int buscaBinariaRecursiva(int *vetor, int valorParaEncontrar, int inicio, int fim) {
    if (inicio > fim) {
        return -1;
    }

    int meio = inicio + (fim - inicio) / 2;
    if (vetor[meio] == valorParaEncontrar) {
        return meio;
    }
    if (vetor[meio] > valorParaEncontrar) {
        return buscaBinariaRecursiva(vetor, valorParaEncontrar, inicio, meio - 1);
    }
    return buscaBinariaRecursiva(vetor, valorParaEncontrar, meio + 1, fim);
}

int main() {
    int tamanho = 0;
    int valorProcurado = 0;
    cin >> tamanho;
    int *vetor = new int[tamanho];
    for (int i = 0; i < tamanho; i++) {
        cin >> vetor[i];
    }
    cin >> valorProcurado;
    cout << buscaBinariaRecursiva(vetor, valorProcurado, 0, tamanho - 1);
}
