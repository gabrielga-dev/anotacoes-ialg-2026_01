#include<iostream>

using namespace std;

void printar(string qualquerCoisa) {
    cout <<  qualquerCoisa << endl;
}

void printarOlaMundo() {
    printar("Olá! Mundo!");
}

int somar(int a, int b) {
    return a + b;
}

int maisUm(int& num) {
    return num++;
}

int main() {
    printarOlaMundo();
    printar("Olá!");

    int soma = 1 + 2;
    cout << soma << endl;
    cout << somar(3, 2) << endl;


    int num = 0;
    num++;
    cout << num << endl;
    maisUm(num);
    cout << num << endl;

    return 0;
}