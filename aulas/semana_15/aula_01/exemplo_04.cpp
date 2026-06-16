#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

struct Pessoa {
    int idade;
    char nome[50];
    float peso;
};

int main() {
    Pessoa p;

    ofstream arquivo("pessoas.dat", ios::binary);

    if (!arquivo) {
        cout << "Erro ao abrir o arquivo.\n";
        return 1;
    }

    for (int i = 0; i < 3; i++) {

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Nome: ";
        cin.getline(p.nome, 50);

        cout << "Idade: ";
        cin >> p.idade;

        cout << "Peso: ";
        cin >> p.peso;

        arquivo.write((char*)&p, sizeof(Pessoa));

        cout << "Pessoa salva com sucesso.\n";
    }

    arquivo.close();

    cout << "==========================================" << endl;

    ifstream arquivo_leitura("pessoas.dat", ios::binary);

    while (arquivo_leitura.read((char*)&p, sizeof(Pessoa))) {
        cout << "Nome: " << p.nome << endl;
        cout << "Idade: " << p.idade << endl;
        cout << "Peso: " << p.peso << " kg" << endl;
        cout << "---------------------" << endl;
    }

    arquivo_leitura.close();

    return 0;
}