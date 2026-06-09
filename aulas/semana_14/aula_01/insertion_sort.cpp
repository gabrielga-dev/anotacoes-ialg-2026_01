#include <iostream>

using namespace std;

int main() {
    char vetor[5] = {'f', 'e', 'd', 'c', 'b'};

    for (int i = 0; i < 5; i++) {
        int copy_i = i;
        while (copy_i > 0 && vetor[copy_i - 1] > vetor[copy_i]) {
            int aux = vetor[copy_i - 1];
            vetor[copy_i - 1] = vetor[copy_i];
            vetor[copy_i] = aux;
            copy_i--;
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << vetor[i] << " ";
    }
}
