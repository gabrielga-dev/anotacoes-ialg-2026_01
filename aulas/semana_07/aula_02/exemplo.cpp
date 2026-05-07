#include <iostream>


using namespace std;

int fetuccini(int *vetor, int i) {
    if (i % 2 == 0) {
        return vetor[i - 1] - vetor[i - 2];
    }
    return vetor[i - 1] + vetor[i - 2];
}

int main() {
    int n = 0, t1 = 0, t2 = 0;
    cin >> n >> t1 >> t2;

    int vetor[n];
    vetor[0] = t1;
    vetor[1] = t2;

    cout << vetor[0] << " " << vetor[1] << " ";
    for (int i = 2; i < n; i++) {
        vetor[i] = fetuccini(vetor, i);
        cout << vetor[i] << " ";
    }
}
