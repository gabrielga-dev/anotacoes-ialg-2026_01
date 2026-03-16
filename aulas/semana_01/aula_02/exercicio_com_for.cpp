#include <iostream>

using namespace std;

/*
 * Calcular a média de idades de 5 pessoas
 */
int main () {
    int quantidadePessoas = 5;
    int total = 0;

    for (int i = 1; i <= quantidadePessoas; i++) {
        int idade;
        cout << "Digite a sua idade: ";
        cin >> idade;
        total += idade;
    }

    float media = (float) total / quantidadePessoas;
    cout << "Média " << media << endl;
}