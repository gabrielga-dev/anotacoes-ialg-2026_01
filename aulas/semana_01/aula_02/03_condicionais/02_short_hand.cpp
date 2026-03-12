#include <iostream>
#include <math.h>

using namespace std;

/*
 * short hand (mãozinha) é um jeito simples e rápido de fazer um if-else ("é um, ou o outro")
 * (<condição>) ? <valor_caso_true> : <valor_caso_False>;
 */
int main() {
    int idade;

    cout << "Digite sua idade ";
    cin >> idade;

    string resposta = (idade >= 18) ? "Maior de idade" : "Menor de idade";

    cout << resposta << endl;

    return 0;
}