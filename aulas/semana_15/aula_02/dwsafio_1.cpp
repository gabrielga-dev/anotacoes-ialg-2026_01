#include <iostream>
#include <fstream>

using namespace std;

struct Aluno {
    char nome[30];
    int matricula;
    float nota;

};


int main() {

    ofstream arquivo ("pessoas.bin", ios::binary);

    if (!arquivo) {
        cout << "Erro ao abrir arquivo!" << endl;
        return 1;
    }
    Aluno alunos[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Insira o nome do aluno " << i + 1 << ": ";
        cin >> alunos[i].nome;
        cout << "Insira o numero de matricula " << i + 1 << ": ";
        cin >> alunos[i].matricula;
        cout << "Insira o nota do aluno " << i + 1 << ": ";
        cin >> alunos[i].nota;
        arquivo.write((char *) &alunos[i], sizeof(Aluno));
    }
    arquivo.close();
    ifstream arquivoleitura("pessoas.bin", ios::binary);

    Aluno a;
    int numerobusca;
    bool verdadeiro = false;
    cout << "Insira o numero de matricula " << ": ";
    cin >> numerobusca;
    while (arquivoleitura.read((char *) &a, sizeof(Aluno)) && (!verdadeiro ) ){
         if (numerobusca == a.matricula) {
             cout << "Esse e o nome do aluno " << a.nome << "Essa e a nota do aluno " << a.nota << endl;
             verdadeiro = true;
         }
    }
    if (!verdadeiro) {
        cout << "Aluno nao encontrado!" << endl;
    }

    return 0;
}