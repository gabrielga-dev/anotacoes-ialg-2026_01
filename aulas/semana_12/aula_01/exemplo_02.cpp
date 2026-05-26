#include <iostream>

using namespace std;

struct lista_de_numeros {
    int * numeros;
    int quantidade;

    void mostra() {
        if (quantidade == 0) {
            cout << "Lista vazia" << endl;
        } else {
            cout << "Quantidade: " << quantidade << endl;
            for (int i = 0; i < quantidade; i++) {
                cout << numeros[i] << endl;
            }
        }
    }
};


void adiciona_numero(lista_de_numeros * lista, int numero) {
    int * novo_vetor = new int[(*lista).quantidade + 1];
    for (int i = 0; i < (*lista).quantidade; i++) {
        novo_vetor[i] = (*lista).numeros[i];
    }
    novo_vetor[(*lista).quantidade] = numero;
    (*lista).quantidade++;
    delete [] (*lista).numeros;
    (*lista).numeros = novo_vetor;
}

int main() {
    lista_de_numeros lista;
    lista.quantidade = 0;
    lista.numeros = new int [1];

    int novo_numero;
    cin >> novo_numero;
    while (novo_numero >= 0) {
        adiciona_numero(&lista, novo_numero);
        cin >> novo_numero;
    }

    lista.mostra();

    return 0;
}