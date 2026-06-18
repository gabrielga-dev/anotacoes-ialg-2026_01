#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

// Estrutura (registro) do aluno: nome, matricula e nota
struct Aluno {
    char nome[100]; // vetor de char com no maximo 100 caracteres
    int matricula;
    float nota;
};

int main() {
    // Abre o arquivo em modo binario para escrita
    ofstream arquivo("pessoas.bin", ios::binary);

    if (!arquivo) {
        cout << "Erro ao criar o arquivo!" << endl;
        return 1;
    }

    // Vetor com 10 registros de alunos
    Aluno alunos[10];

    for (int i = 0; i< 10; i++) {
        cout << "Nome do aluno " << i+1<<": ";
        cin >> alunos[i].nome;

        cout << "Matrícula do aluno " << i+1<<": ";
        cin >> alunos[i].matricula;

        cout << "Nota do aluno " << i+1<<": ";
        cin >> alunos[i].nota;
        arquivo.write((char*)&alunos[i], sizeof(Aluno));
    }

    // Escreve todos os 10 registros de uma vez (sem cabecalho)

    arquivo.close();

    cout << "Arquivo 'alunos.dat' criado com sucesso!" << endl;

    return 0;
}