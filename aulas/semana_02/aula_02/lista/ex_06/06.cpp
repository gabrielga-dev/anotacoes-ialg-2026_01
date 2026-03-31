#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    ofstream saida("arquivo.txt");
    float valor;
    cin >> valor;

    int valorInt = floor(valor);
    float valorFloat = valor - valorInt;
    int valorBaixo = floor(valor);
    int valorCima = ceil(valor);
    int valorArredondado = round(valor);

    saida << valorInt << endl;
    saida << valorFloat << endl;
    saida << valorBaixo << endl;
    saida << valorCima << endl;
    saida << valorArredondado << endl;

    saida.close();

    return 0;
}