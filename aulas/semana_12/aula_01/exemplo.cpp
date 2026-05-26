#include <iostream>

using namespace std;

struct episodio {
    string nome;
    int duracao;
    string data_lancamento;
};

struct temporada {
    string nome;
    episodio* episodios;
    int qtd_episodios;
    string data_lancamento;
};

struct serie {
    string nome;
    temporada* temporadas;
    int qtd_temporadas;
    string data_lancamento;
};

int mostra_menu_e_recolhe_escolha();
void criar_serie(serie*& series, int * qtd_series);
void adicionar_temporada(serie* series, int qtd_series);
void adicionar_episodio(serie* series, int qtd_series);
void listar_series(serie* series, int qtd_series);

int main() {

    serie* series = nullptr;
    int qtd_series = 0;

    int escolha = 0;

    while (escolha != 5) {

        escolha = mostra_menu_e_recolhe_escolha();

        switch (escolha) {

            case 1:
                criar_serie(series, &qtd_series);
                break;

            case 2:
                adicionar_temporada(series, qtd_series);
                break;

            case 3:
                adicionar_episodio(series, qtd_series);
                break;

            case 4:
                listar_series(series, qtd_series);
                break;

            case 5:
                cout << "Bye!" << endl;
                break;
        }
    }

    return 0;
}

int mostra_menu_e_recolhe_escolha() {

    cout << "\n---------------------------------------" << endl;
    cout << "Menu:" << endl;
    cout << "1.) Criar serie;" << endl;
    cout << "2.) Adicionar temporada;" << endl;
    cout << "3.) Adicionar episodio;" << endl;
    cout << "4.) Listar series;" << endl;
    cout << "5.) Sair." << endl;

    cout << "Sua escolha: ";

    int escolha = 0;
    cin >> escolha;

    while ((escolha < 1) || (escolha > 5)) {
        cout << "Escolha invalida." << endl;
        cout << "Sua escolha: ";
        cin >> escolha;
    }

    return escolha;
}

void criar_serie(serie*& series, int * qtd_series) {

    serie* novo_vetor = new serie[(*qtd_series) + 1];

    for (int i = 0; i < (*qtd_series); i++) {
        novo_vetor[i] = series[i];
    }

    cout << "Nome da serie: ";
    cin.ignore();
    getline(cin, novo_vetor[(*qtd_series)].nome);

    cout << "Data de lancamento: ";
    getline(cin, novo_vetor[(*qtd_series)].data_lancamento);

    novo_vetor[(*qtd_series)].temporadas = nullptr;
    novo_vetor[(*qtd_series)].qtd_temporadas = 0;

    delete[] series;

    series = novo_vetor;

    (*qtd_series)++;

    cout << "Serie criada com sucesso!" << endl;
}

void adicionar_temporada(serie* series, int qtd_series) {

    if (qtd_series == 0) {
        cout << "Nenhuma serie cadastrada." << endl;
        return;
    }

    cout << "\nSeries disponiveis:" << endl;

    for (int i = 0; i < qtd_series; i++) {
        cout << i << " - " << series[i].nome << endl;
    }

    int indice;

    cout << "Escolha a serie: ";
    cin >> indice;

    if ((indice < 0) || (indice >= qtd_series)) {
        cout << "Indice invalido." << endl;
        return;
    }

    serie& s = series[indice];

    temporada* novo_vetor = new temporada[s.qtd_temporadas + 1];

    for (int i = 0; i < s.qtd_temporadas; i++) {
        novo_vetor[i] = s.temporadas[i];
    }

    cout << "Nome da temporada: ";
    cin.ignore();
    getline(cin, novo_vetor[s.qtd_temporadas].nome);

    cout << "Data de lancamento: ";
    getline(cin, novo_vetor[s.qtd_temporadas].data_lancamento);

    novo_vetor[s.qtd_temporadas].episodios = nullptr;
    novo_vetor[s.qtd_temporadas].qtd_episodios = 0;

    delete[] s.temporadas;

    s.temporadas = novo_vetor;

    s.qtd_temporadas++;

    cout << "Temporada adicionada com sucesso!" << endl;
}

void adicionar_episodio(serie* series, int qtd_series) {

    if (qtd_series == 0) {
        cout << "Nenhuma serie cadastrada." << endl;
        return;
    }

    cout << "\nSeries disponiveis:" << endl;

    for (int i = 0; i < qtd_series; i++) {
        cout << i << " - " << series[i].nome << endl;
    }

    int indice_serie;

    cout << "Escolha a serie: ";
    cin >> indice_serie;

    if ((indice_serie < 0) || (indice_serie >= qtd_series)) {
        cout << "Indice invalido." << endl;
        return;
    }

    serie& s = series[indice_serie];

    if (s.qtd_temporadas == 0) {
        cout << "Essa serie nao possui temporadas." << endl;
        return;
    }

    cout << "\nTemporadas disponiveis:" << endl;

    for (int i = 0; i < s.qtd_temporadas; i++) {
        cout << i << " - " << s.temporadas[i].nome << endl;
    }

    int indice_temporada;

    cout << "Escolha a temporada: ";
    cin >> indice_temporada;

    if ((indice_temporada < 0) || (indice_temporada >= s.qtd_temporadas)) {
        cout << "Indice invalido." << endl;
        return;
    }

    temporada& t = s.temporadas[indice_temporada];

    episodio* novo_vetor = new episodio[t.qtd_episodios + 1];

    for (int i = 0; i < t.qtd_episodios; i++) {
        novo_vetor[i] = t.episodios[i];
    }

    cout << "Nome do episodio: ";
    cin.ignore();
    getline(cin, novo_vetor[t.qtd_episodios].nome);

    cout << "Duracao (em minutos): ";
    cin >> novo_vetor[t.qtd_episodios].duracao;

    cin.ignore();

    cout << "Data de lancamento: ";
    getline(cin, novo_vetor[t.qtd_episodios].data_lancamento);

    delete[] t.episodios;

    t.episodios = novo_vetor;

    t.qtd_episodios++;

    cout << "Episodio adicionado com sucesso!" << endl;
}

void listar_series(serie* series, int qtd_series) {

    if (qtd_series == 0) {
        cout << "Nenhuma serie cadastrada." << endl;
        return;
    }

    cout << "\n========== SERIES ==========" << endl;

    for (int i = 0; i < qtd_series; i++) {

        cout << "\nSerie: " << series[i].nome << endl;
        cout << "Lancamento: " << series[i].data_lancamento << endl;

        for (int j = 0; j < series[i].qtd_temporadas; j++) {

            cout << "  Temporada: " << series[i].temporadas[j].nome << endl;

            for (int k = 0; k < series[i].temporadas[j].qtd_episodios; k++) {

                episodio ep = series[i].temporadas[j].episodios[k];

                cout << "    Episodio: " << ep.nome
                     << " | Duracao: " << ep.duracao
                     << " min | Lancamento: "
                     << ep.data_lancamento << endl;
            }
        }
    }
}