// 07 - Implemente um programa que solicite ao usuário que insira uma sequência de
// números inteiros positivos. O programa deve contar quantos números pares e quantos
// números ímpares foram inseridos. Ao final, o programa deve exibir o total de números
// pares e ímpares.

#include <iostream>
using namespace std;

int main () {
    int pares, impares, num = 0;
    
    cout << "Digite numeros inteiros positivos (0 para encerrar):" << endl;
    cin >> num;

    while(num > 0) {
        if (num % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
        
        //eu só não entendi o conceito disso aqui abaixo
        cin >> num;
    }
    cout << "Total de pares: " << pares << endl;
    cout << "Total de impares: " << impares << endl;
    return 0;
}