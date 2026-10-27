// 02 – Construa um programa que realize o cálculo de fatorial de um número informado
// pelo usuário

#include <iostream>
using namespace std;

int main () {
    int n;
    cout << "Informe um numero: ";
    cin >> n;

    if (n < 0) {
        cout << "Fatorial não existe para número negativo." << endl;
    }

    unsigned long long fat = 1;
    for (int i = 2; i <= n; i++) {
        fat *= i;
    }
    
    cout << n << "! = " << fat << endl;

    return 0;
}
