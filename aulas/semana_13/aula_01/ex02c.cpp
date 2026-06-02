#include <iostream>

using namespace std;
int main() {
    int v;
    cin >> v;
    int vet [v];

    for (int i = 0; i < v; i++) {
        cin >> vet[i];
    }
    int maior = -9999, menor = 9999;
    float media = 0;

    for (int i=0; i < v; i++) {
        media += vet[i];

        if (vet[i] > maior) {
            maior = vet[i];
        }
        if (vet[i] < menor) {
            menor = vet[i];
        }
    }

    if (v != 0) {
        media /= v;
    }
    cout << maior << " " << menor << endl;
    cout << media << endl;

    return 0;
}