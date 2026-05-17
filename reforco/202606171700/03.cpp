#include <iostream>

using namespace std;

int maior(int * vetor, int tamanho) {
    int maiorNumero = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] > maiorNumero) {
            maiorNumero = vetor[i];
        }
    }
    return maiorNumero;
}

int main() {
    int vetor[10];
    for (int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    int maiorNumero = maior(vetor, 10);

    cout << maiorNumero << endl;
}