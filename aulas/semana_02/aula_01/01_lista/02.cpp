//v = 14.6 * sqrt(c)

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float comprimento;
    cin >> comprimento;

    float velocidade = 14.6 * sqrt(comprimento);

    cout << velocidade << endl;
}