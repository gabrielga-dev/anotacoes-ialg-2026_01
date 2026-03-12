#include <iostream>
#include <math.h>

using namespace std;

/*
 * switch é um if limitado, porém elegante
 * switch(expressão) {
 *  case <valor_1>:
 *      //faça o que for necessário
 *      break;
 *  case <valor_2>:
 *      //faça o que for necessário
 *      break;
 *  default:
 *      //faça o que for necessário
 * }
 */
int main() {
    int ano;
    cout << "Digite um ano: ";
    cin >> ano;

    switch (ano) {
        case 1930:
            cout << "Teve Copa!" << endl;
            break;
        case 1934:
            cout << "Teve Copa!" << endl;
            break;
        case 1938:
            cout << "Teve Copa!" << endl;
            break;
        case 1950:
            cout << "Teve Copa!" << endl;
            break;
        case 1954:
            cout << "Teve Copa!" << endl;
            break;
        case 1958:
            cout << "Teve Copa!" << endl;
            break;
        case 1962:
            cout << "Teve Copa!" << endl;
            break;
        case 1966:
            cout << "Teve Copa!" << endl;
            break;
        case 1970:
            cout << "Teve Copa!" << endl;
            break;
        case 1974:
            cout << "Teve Copa!" << endl;
            break;
        case 1978:
            cout << "Teve Copa!" << endl;
            break;
        case 1982:
            cout << "Teve Copa!" << endl;
            break;
        case 1986:
            cout << "Teve Copa!" << endl;
            break;
        case 1990:
            cout << "Teve Copa!" << endl;
            break;
        case 1994:
            cout << "Teve Copa!" << endl;
            break;
        case 1998:
            cout << "Teve Copa!" << endl;
            break;
        case 2002:
            cout << "Teve Copa!" << endl;
            break;
        case 2006:
            cout << "Teve Copa!" << endl;
            break;
        case 2010:
            cout << "Teve Copa!" << endl;
            break;
        case 2014:
            cout << "Teve Copa!" << endl;
            break;
        case 2018:
            cout << "Teve Copa!" << endl;
            break;
        case 2022:
            cout << "Teve Copa!" << endl;
            break;
        default:
            cout << "Não teve Copa!" << endl;
    }

    return 0;
}
