#include <iostream>

using namespace std;

int main() {
    int vetor[5] = {5, 4, 3, 2, 1};

    for (int index_pivo = 0; index_pivo < 5; index_pivo++) {
        int index_menor = index_pivo;
        int menor = vetor[index_pivo];
        for (int i = index_pivo + 1; i < 5; i++) {
            if (vetor[i] < menor) {
                menor = vetor[i];
                index_menor = i;
            }
        }
        int aux = vetor[index_pivo];
        vetor[index_pivo] = vetor[index_menor];
        vetor[index_menor] = aux;
    }

    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
}
