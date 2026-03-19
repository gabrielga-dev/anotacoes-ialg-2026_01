#include <iostream>

using namespace std;

int main (){
    float nota1, nota2;
    cin>>nota1;
    cin>>nota2;

    float media = ((nota1 * 2) + (nota2 * 3)) / 5;

    cout << media << endl;

    return 0;
}