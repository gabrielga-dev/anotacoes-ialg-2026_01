#include<iostream>

using namespace std;

int main() {
    int quantidadeNumeros = 0;
    cin >> quantidadeNumeros;

    int numeros[quantidadeNumeros];
    for (int i = 0; i < quantidadeNumeros; i++) {
        cin >> numeros[i];
    }

    for (int i = 0; i < quantidadeNumeros; i++) {
        cout << "Posição: " << i << "; Valor: " <<numeros[i] << endl;
    }
    cout << "Posição: " << 10 << "; Valor: " <<numeros[10] << endl;
}
