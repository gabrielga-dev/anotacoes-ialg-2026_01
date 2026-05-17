#include<iostream>

using namespace std;

int main() {
    int tamanhoFita = 70;

    //Quantidade de aminoacidos
    int qtdA = 0, qtdC = 0, qtdG = 0, qtdT = 0;

    //pesos
    double pesoAgua = 18.01056;
    double pesoA = 71.03711, pesoC = 103.00919, pesoG = 57.02146, pesoT = 101.04768;
    double pesoTotal = 0;

    string fita = "";
    cin >> fita;

    for (int i = 0; i < tamanhoFita; i++) {
        if (fita[i] == 'A') {
            qtdA++;
        }
        if (fita[i] == 'C') {
            qtdC++;
        }
        if (fita[i] == 'G') {
            qtdG++;
        }
        if (fita[i] == 'T') {
            qtdT++;
        }
    }

    pesoTotal = ((pesoAgua + pesoA) * qtdA) +
                ((pesoAgua + pesoC) * qtdC) +
                ((pesoAgua + pesoG) * qtdG) +
                ((pesoAgua + pesoT) * qtdT);

    cout << pesoTotal << endl;
}
