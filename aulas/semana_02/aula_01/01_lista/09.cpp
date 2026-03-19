#include <iostream>
using namespace std;

int main()
{
    float largura,altura;
    cin >> largura >> altura;

    float area = largura * altura;

    float litros= area / 2;
    float litrosComDemao = litros * 3;

    cout << litrosComDemao << " Litros" << endl ;

    return 0;
}