#include <iostream>
#include <fstream>

using namespace std;

struct Aluno {
    char nome[100];
    int matricula;
    float nota;
};

int main() {
    ifstream arquivo_leitura("pessoas.bin", ios::binary);
    int contador = 0;

    Aluno a;
    while (arquivo_leitura.read((char *) &a, sizeof(Aluno))) {
        cout << "Nome: " << a.nome << endl;
        cout << "Matrícula: " << a.matricula << endl;
        cout << "Nota: " << a.nota << endl;
        cout << "---------------------" << endl;
    }

    arquivo_leitura.close();
    cout << "Total de registros lidos: " << contador << endl;

    return 0;
}
