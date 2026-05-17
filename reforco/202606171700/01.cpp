#include <iostream>

using namespace std;

int soma(int *numeros, int tamanho) {
    int resultado = 0;
    for (int i = 0; i < tamanho; i++) {
        resultado += numeros[i];
    }
    return resultado;
}

int main() {
    int numeros[10];
    for (int i = 0; i < 10; i++) {
        cin >> numeros[i];
    }
    int resultado = soma(numeros, 10);
    cout << resultado << endl;
}