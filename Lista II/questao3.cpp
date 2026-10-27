// 03 – Após criar a função de povoamento, crie outra função que recebe 3 vetores como parâmetro, o primeiro já povoado pelo usuário, e dois 
// vazios. Essa função irá realizar o procedimento de dividir o vetor povoado em dois, um com a metade primeira do vetore o outro com a metade 
// segunda do vetor. (Use o retorno void)

#include <iostream>
using namespace std;

void povoar (int vet[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
    }
}

void dividir(int original[], int n, int primeira[], int segunda[]) {
    int meio = n / 2;
    
    for (int i = 0; i < meio; i++) {
        primeira[i] = original[i];
    }
    for (int i = meio; i < n; i++) {
        segunda[i - meio] = original[i];
    }
}

int main () {
    int n;
    cout << "Tamanho do vetor ";
    cin >> n;

    int *vet = new int[n];
    povoar(vet, n);

    int meio = n / 2; 
    int *primeira = new int[meio]; 
    int *segunda = new int[n - meio];


    dividir(vet, n, primeira, segunda); 
    cout << "Primeira metade: ";
    for (int i = 0; i < meio; i++) {
        cout << primeira[i] << " ";
    }
    cout << endl;

    cout << "Segunda metade: ";
    for (int i = 0; i < n - meio; i++) {
        cout << segunda[i] << " ";
    }
    cout << endl;

    cout << "Vetor: ";
    for (int i = 0; i < n; i++) {
        cout << vet[i];
    }

    cout << endl;
    delete[] vet;
    delete[] primeira;
    delete[] segunda;
    return 0;
}

