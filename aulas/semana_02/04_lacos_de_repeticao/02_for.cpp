#include <iostream>

using namespace std;

/*
 * for é um laço de repetição que executa algo enquanto uma condição for verdadeira, podendo executar um comando a
 * cada iteração
 *
 * for(<variavel> ; <condicao> ; <comando>) {
 *      //fazer o que for necessário
 * }
 */

int main() {
    int numero = 0;
    int tentativas = 10;

    for (int i = 0; i < tentativas; i++) {
        cout << "Digite um número: ";
        cin >> numero;

        if (numero == 10) {
            cout << "Você acertou o número 10!" << endl;
            return 0;
        }
    }

    cout << "Você não acertou o número =[" << endl;
    return 0;
}
