#include <iostream>

using namespace std;
int main() {
    int num, aux, cont=0;
    bool primeira=true;

    cin>>num;

    int *vet = new int[num];

    /*
     5

     23
     72
     90
     55
     103


     */

    for (int i=0; i<num;i++){
        cin>>vet[i];
        int j=0;
        while(j<=i) {
            if (vet[j]<vet[i]) {
                aux=vet[i];
                vet[i]=vet[j];
                vet[j]=aux;
            }
            j++;
        }
    }
    for (int i=0;i<num;i++) {
        cout<<vet[i];
    }



    return 0;
}