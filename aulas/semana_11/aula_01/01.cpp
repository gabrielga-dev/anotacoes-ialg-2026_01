#include<iostream>

using namespace std;

int encontraValor(int * vetor, int tam, int valor, int posicaoAtual) {
    if (posicaoAtual == tam) {
        return -1;
    }
    if (vetor[posicaoAtual] == valor) {
        return posicaoAtual;
    }
    return encontraValor(vetor,tam,valor,posicaoAtual+1);
}

int main() {
    int vetor[10] = {1,2,3,4,5,6,7,8,9,10};
    int valor = 10;

    //

    int posicao = encontraValor(vetor,10,valor,0);
    cout << posicao << endl;
}


/*
 * 1 -> {1,2,3,4,5,6,7,8,9,10}, 10, 10, 0
 * 1 -> {1,2,3,4,5,6,7,8,9,10}, 10, 10, 1
 * 1 -> {1,2,3,4,5,6,7,8,9,10}, 10, 10, 2
 * 1 -> {1,2,3,4,5,6,7,8,9,10}, 10, 10, 3
 * .
 * .
 * .
 * 1 -> {1,2,3,4,5,6,7,8,9,10}, 10, 10, 9
 */