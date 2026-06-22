#include <iostream>

using namespace std;

int * remove_posicao_inicial(int *vetor, int tamanho_atual) {
    int *vetor_aux = new int[tamanho_atual - 1];
    for (int i = 1; i < tamanho_atual; i++) {
        vetor_aux[i - 1] = vetor[i];
    }
    delete [] vetor;
    return vetor_aux;
}

int *adiciona_elemento_no_fim_do_vetor(int *vetor, int tamanho_atual, int elemento) {
    int *vetor_resultante = nullptr;
    if (vetor == nullptr) {
        vetor_resultante = new int[1];
        vetor_resultante[0] = elemento;
        return vetor_resultante;
    }
    vetor_resultante = new int[tamanho_atual + 1];
    for (int i = 0; i < tamanho_atual; i++) {
        vetor_resultante[i] = vetor[i];
    }
    vetor_resultante[tamanho_atual] = elemento;
    delete [] vetor;
    return vetor_resultante;
}

int *fundir_vetores(int *vetor_1, int *vetor_2, int tamanho_vetor_1, int tamanho_vetor_2) {
    int quantidate_vetor_resultante = 0;
    int *vetor_resultante = nullptr;

    while ((tamanho_vetor_1 != 0) && (tamanho_vetor_2 != 0)) {
        if (vetor_1[0] > vetor_2[0]) {
            vetor_resultante = adiciona_elemento_no_fim_do_vetor(
                vetor_resultante,
                quantidate_vetor_resultante,
                vetor_2[0]
            );
            vetor_2 = remove_posicao_inicial(vetor_2, tamanho_vetor_2);
            tamanho_vetor_2--;
            quantidate_vetor_resultante++;
        } else {
            vetor_resultante = adiciona_elemento_no_fim_do_vetor(
                vetor_resultante,
                quantidate_vetor_resultante,
                vetor_1[0]
            );
            vetor_1 = remove_posicao_inicial(vetor_1, tamanho_vetor_1);
            tamanho_vetor_1--;
            quantidate_vetor_resultante++;
        }
    }

    while (tamanho_vetor_1 != 0) {
        vetor_resultante = adiciona_elemento_no_fim_do_vetor(
            vetor_resultante,
            quantidate_vetor_resultante,
            vetor_1[0]
        );
        vetor_1 = remove_posicao_inicial(vetor_1, tamanho_vetor_1);
        tamanho_vetor_1--;
        quantidate_vetor_resultante++;
    }

    while (tamanho_vetor_2 != 0) {
        vetor_resultante = adiciona_elemento_no_fim_do_vetor(
                vetor_resultante,
                quantidate_vetor_resultante,
                vetor_2[0]
            );
        vetor_2 = remove_posicao_inicial(vetor_2, tamanho_vetor_2);
        tamanho_vetor_2--;
        quantidate_vetor_resultante++;
    }
    return vetor_resultante;
}

int *merge_sort(int *vetor, int tamanho) {
    if (tamanho == 1) {
        return vetor;
    }
    int meio = tamanho / 2;
    int *vetor_1 = new int[meio];
    int *vetor_2 = new int[tamanho - meio];

    for (int i = 0; i < meio; i++) {
        vetor_1[i] = vetor[i];
    }
    for (int i = meio; i < tamanho; i++) {
        vetor_2[i - meio] = vetor[i];
    }

    vetor_1 = merge_sort(vetor_1, meio);
    vetor_2 = merge_sort(vetor_2, tamanho - meio);

    return fundir_vetores(vetor_1, vetor_2, meio, tamanho - meio);
}

int main() {
    int vetor[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    int * vetor_resutante = merge_sort(vetor, 10);

    for (int i = 0; i < 10; i++) {
        cout << vetor_resutante[i] << " ";
    }
    cout << endl;

    return 0;
}
