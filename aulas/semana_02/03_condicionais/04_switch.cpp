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

    bool entreDatas = (1930 <= ano && ano <= 2026);
    int distanciaDoInicio = ano - 1930;
    bool teveCopa = (distanciaDoInicio % 4) == 0;

    switch (entreDatas && teveCopa) { //fica feio, não é? aqui é melhor usar um if
        case true:
            cout << "Teve Copa!" << endl;
            break;
        case false:
            cout << "Não teve Copa!" << endl;
            break;
    }

    return 0;
}
