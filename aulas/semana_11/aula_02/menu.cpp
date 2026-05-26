#include <iostream>

using namespace std;

int main() {

    int escolha = 0;
    while (escolha != 3) {
        cout << "Menu:" << endl;
        cout << "1. cadastrar usuario" << endl;
        cout << "2. listar usuario:" << endl;
        cout << "3. sair" << endl;
        cin >> escolha;
        switch (escolha) {
            case 1:
                //cadastra
                break;
            case 2:
                //listar
                break;
            case 3:
                cout << "Bye!" << endl;
                break;
        }
    }
}