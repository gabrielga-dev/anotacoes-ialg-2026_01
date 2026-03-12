#include <iostream>

using namespace std;

/*
 * while é um laço de repetição que executa algo enquanto uma condição for verdadeira
 * ele é bom para quando você não sabe quantas repetições serão feitas.
 *
 * while(<condicao>) {
 *      //fazer o que for necessário
 * }
 */

int main() {
    int numero = 0;

    while (numero <= 10) {
        cout << "Digite um número: ";
        cin >> numero;
    }

    cout << "Você digitou um número maior que 10!" << endl;

    return 0;
}
