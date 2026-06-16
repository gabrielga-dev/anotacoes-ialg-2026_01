#include <fstream>
#include <iostream>
using namespace std;

int main() {
    string nomeArq = "./test.txt";
    ifstream arquivo(nomeArq.c_str());
    char c[1];
    int count = 0;
    if (arquivo) {
        while (arquivo.read(c, 1)) {
            if ((c[0] == 'a') or (c[0] == 'A'))
                count++;
        }
        cout << count << endl;
    } else {
        cout << "arquivo não pode ser aberto!" << endl;
    }
    return 0;
}
