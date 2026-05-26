#include <iostream>

using namespace std;

float H(int n) {
    float valor = 0;
    if (n == 1) {
        valor = 1;
    } else {
        valor = (1.0/n) + H(n - 1);
    }
    cout << valor << endl;
    return valor;
}

int main() {
    int n = 0;
    cin >> n;
    H(n);
    return 1;
}