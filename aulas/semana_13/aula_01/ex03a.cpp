#include <iostream>

using namespace std;
int main() {
   int tam;
    cin >> tam;
    int* vetA = new int(tam);
    int* vetB = new int(tam);
    int produtoEscalar = 0;

    for (int i = 0; i < tam; i++) {
        cin >> vetA[i];
    }
    for (int i = 0; i < tam; i++) {
        cin >> vetB[i];
    }
    for (int i = 0; i < tam; i++) {
        produtoEscalar += vetA[i] * vetB[i];
    }

    cout << produtoEscalar;

    return 0;
}