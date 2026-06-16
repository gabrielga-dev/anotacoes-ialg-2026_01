#include <fstream>
#include <iostream>
using namespace std;
int main(){
  ifstream entrada("test.txt");
  if (entrada) {
    entrada.seekg(0, entrada.end);
    int tam = entrada.tellg();
    entrada.seekg(0, entrada.beg);
    cout << tam << endl << endl;
    char bloco[tam];
    entrada.read(bloco,tam);
    cout.write(bloco,tam);
  } else {
      cout << "arquivo não pode ser aberto!" << endl;
  }
  return 0;
}