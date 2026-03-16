#include <iostream>

using namespace std;

//cout  -> printa
//cin   -> recebe
int main() {
    int idade = 0;
    string nome;
    string hobby;
    double valorPi;

    cout << "Digite seu nome: ";
    cin >> nome;            //pega string, mas não pega nada após o espaço
    // getline(cin, nome);  // pega a linha completa

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite seu hobby: ";
    cin >> hobby;

    cout << "Digite o valor de PI: ";
    cin >> valorPi;

    std::cout << "Nome: " << nome << ", Idade: " << idade << ", Hobby: " << hobby << ", Pi = " << valorPi << std::endl;


    return 0;
}