#include <iostream>

using namespace std;

void multiplicaTodosPorDois(int *numeros, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        numeros[i] = numeros[i] * 2;
    }
}

int main() {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }

    multiplicaTodosPorDois(numeros, 10);

    for (int i = 0; i < 10; i++) {
        cout << numeros[i] << endl;
    }
}