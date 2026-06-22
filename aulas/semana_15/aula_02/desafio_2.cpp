#include <iostream>
#include <fstream>
using namespace std;

struct Data {
    int dia;
    int mes;
    int ano;

};
struct Emprestimo {
    char tituoLivro[50];
    char autor[50];
    Data diaemprestimo;
    char nomeEmprestimo[50];
};

int main () {
    ifstream arquivo("exemplo.bin", ios::binary);


    unsigned int qtd = 0;
    if (arquivo) {
        arquivo.read((char*)&qtd, sizeof(unsigned int));
        Emprestimo *infos = new Emprestimo[qtd];
        arquivo.read((char*)infos, qtd*sizeof(Emprestimo));

        cout << qtd << endl;



    } else cout << "Arquivo nao pode ser lido\n";







}