// 04 - Realize a implementação de um programa que solicite ao usuário o tanto de
// números que ele quer informar. Após isso realize a soma de todos os números pares
// que ele informou e imprima ao final.

#include <iostream>
using namespace std;

int main () {
    int qtd, num, soma = 0;
    
    cout << "Quantos números deseja informar?: " << endl;
    cin >> qtd;

    for (int i = 1; i <= qtd; i++) {
        cout << "Numero " << i << ":";
        cin >> num;
        
        if (num % 2 == 0) {
            soma += num;
        }
    }
    cout << "Soma dos pares: " << soma << endl;
    return 0;
}