#include <fstream>
#include <iostream>
using namespace std;

bool eh_aa(char c1, char c2) {
    if (c1 == 'a') {
        if (c2 == 'a' || c2 == 'A') {
            return true;
        }
    } else if (c1 == 'A') {
        if (c2 == 'a' || c2 == 'A') {
            return true;
        }
    }
    return false;
}

int main() {
    string nomeArq = "./test.txt";
    ifstream arquivo(nomeArq.c_str());
    char c[2];
    int count = 0;
    if (arquivo) {
        while (arquivo.read(c, 2)) {
            cout << c[0] << c[1] << endl;
            if (eh_aa(c[0], c[1])) {
                count++;
            }
        }
        cout << count << endl;
    } else {
        cout << "arquivo não pode ser aberto!" << endl;
    }
    return 0;
}
