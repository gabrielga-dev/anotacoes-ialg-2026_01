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
    for (int i=0; i < v; i++) {
        if (vet[i] > maior) {
            maior = vet[i];
        }
        if (vet[i] < menor) {
            menor = vet[i];
        }


    }
    cout << maior << " " << menor << endl;
}