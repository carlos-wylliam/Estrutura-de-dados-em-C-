// 01 – Construa um programa que receba 30 valores inteiros e guarde em uma estrutura
// de dados homogênea unidimensional (Vetor). Após receber os números solicitados o
// algoritmo deverá mostrar a quantidade de números pares contidos no vetor e quais são
// os índices nos quais estão localizados
#include <iostream>
using namespace std;

int main () {
    int vet[30];
    int qtdPares = 0;

    for(int i = 0; i < 30; i++) {
        cout << "Valor " << i + 1 << ": ";
        cin >> vet[i];
        
        if (vet[i] % 2 == 0) {
            qtdPares++;
        }
    }

    cout << "Qtd de números pares: " << qtdPares << endl;
    cout << "Indices dos pares: ";
    for(int i = 0; i < 30; i++) {
        if(vet[i] % 2 == 0) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}