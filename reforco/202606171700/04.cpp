#include <iostream>

using namespace std;

void impares(int * numeros, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        if (numeros[i] % 2 != 0) {
            numeros[i] = 0;
        }
    }
}

int main() {
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    impares(vetor, 10);

    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
}
