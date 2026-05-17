#include <cmath>
#include<iostream>

using namespace std;

bool eh_categoria_1(string str) {
    int tamanhoTotal = str.size();
    string str1 = "", str2 = "";

    if (tamanhoTotal % 2 == 0) {
        str1 = str.substr(0, tamanhoTotal / 2);
        str2 = str.substr(tamanhoTotal / 2, tamanhoTotal -1);
    } else {
        int meio = tamanhoTotal / 2;
        str1 = str.substr(0, meio);
        str2 = str.substr(meio + 1, tamanhoTotal -1);
    }

    //comparar as metades
    string letras;
    int quantidades[tamanhoTotal];
    //implementar restante da comparação
}

int main() {
    int quantidadeStrings;
    cin >> quantidadeStrings;

    string strings[quantidadeStrings];

    for (int i = 0; i < quantidadeStrings; i++) {
        cin >> strings[i];
    }

    //chamar eh_categoria_1 e organizar saída
}