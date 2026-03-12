#include <iostream>
#include <math.h>

using namespace std;

/*
 * if (<condicao_oes>) { //1 ou mais condições
 *      //faça o que for preciso
 * } else if (<condicao_oes>) { // (OPCIONAL) caso as condições anteriores falhem, verifique se essa não falha
 *      //faça o que for preciso
 * } else { // (OPCIONAL) caso as condições anteriores falhem, o que estiver dentro será executado
 *      //faça o que for preciso
 * }
 */
int main() {
    char temDinheiroFisico, temDinheiroVirtual, temComQuemPedirEmprestado;

    cout << "Você tem dinheiro físico? ";
    cin >> temDinheiroFisico;

    cout << "Você tem dinheiro virtual? ";
    cin >> temDinheiroVirtual;

    cout << "Você tem com quem pedir emprestado? ";
    cin >> temComQuemPedirEmprestado;

    if (temDinheiroFisico == 'S') {
        cout << "Você pode comprar!" << endl;
    } else if (temDinheiroVirtual == 'S') {
        cout << "Você pode comprar no PIX!" << endl;
    } else if (temComQuemPedirEmprestado == 'S') {
        cout << "Você pode comprar! Mas não dê uma de caloteiro!" << endl;
    } else {
        cout << "Não poderá comprar =/" << endl;
    }
    return 0;
}