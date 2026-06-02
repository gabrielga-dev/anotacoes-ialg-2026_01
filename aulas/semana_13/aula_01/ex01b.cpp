#include <iostream>

using namespace std;
int main() {
    int *x = new int(1);
    int *y = new int(1);
    int *resultado = new int(1);
    *resultado = (*x) * (*y);
    cout << *resultado << endl;


    return 0;

}