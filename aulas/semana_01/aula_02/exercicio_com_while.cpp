#include <iostream>

using namespace std;

/*
 * Calcular a média de idades de n pessoas, onde n >= 0
 */
int main () {
    int quantidadePessoas = 0;
    int total = 0;

    char continua;

    cout << "Começar pesquisa? ";
    cin >> continua;

    while (continua == 'S') {
        int idade;
        cout << "Digite a sua idade: ";
        cin >> idade;
        total += idade;
        quantidadePessoas++;

        cout << "Continuar pesquisa? ";
        cin >> continua;
    }

    if (quantidadePessoas > 0) {
        float media = (float) total / quantidadePessoas;
        cout << "Média " << media << endl;
    } else {
        cout << "Nenhuma pessoa inseriu sua idade" << endl;
    }
}