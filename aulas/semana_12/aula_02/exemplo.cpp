#include  <iostream>
using namespace std;

int main() {
    int contador = 0;
    int x = 0;
    int *vetor = nullptr;

    while (x >= 0) {
        cin >> x;
        contador++;

        if (vetor == nullptr) {
            vetor = new int[contador];
            vetor[contador - 1] = x;
        } else {
            int * vetor_auxiliar = new int[contador];
            for (int i = 0; i < contador - 1; i++) {
                vetor_auxiliar[i] = vetor[i];
            }
            delete [] vetor;
            vetor = vetor_auxiliar;
            vetor[contador - 1] = x;
        }
    }

    for (int i = 0; i < contador; i++) {
        cout << vetor[i] << endl;
    }
}
