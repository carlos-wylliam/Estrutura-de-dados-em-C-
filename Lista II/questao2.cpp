// 02 – Crie uma função que povoe um vetor de tamanho escolhido pelo usuário. Utilize o retorno void.

#include <iostream>
using namespace std;

// receber vetor tipo inteiro, tipo vetor, receber tamanho vetor tipo inteiro
void povoar (int vet[], int n) {
    // solicitar os numeros ao usuario para preencher o vetor
    for(int i = 0; i < n; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }
}

int main () {
    // tamanho do vetor
    int n;
    // perguntar tamanho do vetor
    cout << "Tamanho do vetor: ";
    // receber o tamanho do vetor
    cin >> n;
    // criar o vetor
    int *vet = new int[n];
    // passar para a função povoar, o novo vetor e o tamanho dele
    povoar(vet, n);
    // imprimir na tela o vetor criado, no caso interar e imprimir na tela cada valor do vetor
    // informar que é o vetor
    cout << "Vetor: ";
    // a interação sob o vetor vai ser com base no tamanho do vetor informado usando a variavel n
    for(int i = 0; i < n; i++) {
        cout << vet[i] << " ";
    }
    // aqui é só por causa da formatação mesmo senão vai ficar colado
    cout << endl;

    // aqui eu acho que é só para deletar o vetor criado no final de tudo para liberar memoria
    delete[] vet;
    return 0;
}