#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream file("valores.csv");

    if (!file.is_open()) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return 1;
    }

    string lixo;

    getline(file, lixo);
    getline(file, lixo);

    int id;
    string nome;
    int ano;
    float nota;
    char sexo;
    string frase;
    char virgula;
    char aspas;

    while (file >> id) {
        file >> virgula;

        getline(file, nome, ',');

        file >> ano;
        file >> virgula;

        file >> nota;
        file >> virgula;

        file >> sexo;
        file >> virgula;
        file >> aspas;//consome abre aspas

        getline(file, frase, '"');

        cout << "ID: " << id
             << " | Nome: " << nome
             << " | Ano: " << ano
             << " | Nota: " << nota
             << " | Sexo: " << sexo
             << " | Frase: " << frase << endl;
    }

    file.close();
    return 0;
}