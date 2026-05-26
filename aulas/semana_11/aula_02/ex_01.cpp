#include <iostream>

using namespace std;

void eh_consoante_maiuscula(char letra, int& resposta) {
    string consoantesMaiusculas = "BCDFGHJKLMNPQRSTVWXYZ";
    for (int i = 0; i < consoantesMaiusculas.length(); i++) {
        if (consoantesMaiusculas[i] == letra) {
            resposta = 1;
        }
    }
    resposta = 0;
}

void eh_consoante_minuscula(char letra, int& resposta) {
    string consoantesMinusculas = "bcdfghjklmnpqrstvwxyz";
    for (int i = 0; i < consoantesMinusculas.length(); i++) {
        if (consoantesMinusculas[i] == letra) {
            resposta = 1;
        }
    }
    resposta = 0;
}

int main() {
    char letras[10];
    char cMaiuscula = '0', cMinuscula = '0';

    for (int i = 0; i < 10; i++) {
        cin >> letras[i];
    }
    cin >> cMaiuscula;
    cin >> cMinuscula;

    for (int i = 0; i < 10; i++) {
        int resposta = 1;
        eh_consoante_maiuscula(letras[i], resposta);
        if (resposta == 1) {
            cout << cMaiuscula;
        } else {
            eh_consoante_minuscula(letras[i], resposta);
            if (resposta == 1) {
                cout << cMinuscula;
            }else {
                cout << letras[i];
            }
        }
        cout << " ";
    }
}
