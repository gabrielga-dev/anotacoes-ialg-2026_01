#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main () {
    ifstream entrada("entradas.txt");
    ofstream saida("saida.txt");

    double alturaDegrauCm;
    double alturaDesejadaM;

    entrada >> alturaDegrauCm;
    entrada >> alturaDesejadaM;

    double alturaDesejadaCm = alturaDesejadaM * 100;
    double quantidadeDegraus = alturaDesejadaCm / alturaDegrauCm;
    int quantidadeDegrausInt = ceil(quantidadeDegraus);

    saida << quantidadeDegrausInt;

    entrada.close();
    saida.close();



    float v = 2.123123123;
    int vInt = floor(v);//2
    v = v - vInt;



    return 0;
}



























int test() {
    ifstream entrada("entradas.txt");
    ofstream saida("degraus.txt");

    double alturaDegrauCm;
    double alturaDesejadaM;

    entrada >> alturaDegrauCm;
    entrada >> alturaDesejadaM;

    double alturaDesejadaCm = alturaDesejadaM * 100;

    float quantidadeDegraus = alturaDesejadaCm / alturaDegrauCm;
    int quantidadeDegrausArrendondado = ceil(quantidadeDegraus);

    saida << quantidadeDegrausArrendondado;

    entrada.close();
    saida.close();

    return 0;
}