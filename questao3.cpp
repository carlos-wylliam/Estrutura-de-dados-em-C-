// 03 - Solicite 20 valores inteiros e calcule as suas médias

#include <iostream>
using namespace std;

int main () {
    int soma, valor = 0;
    
    for (int i = 1; i <= 20; i++) {
        cout << "Valor; " << i << endl;
        cin >> valor;
        soma += valor;
    }
    
    cout << "Media" << soma / 20.0 << endl;
    return 0;
}