// 05 – João aplicou seu dinheiro na poupança que rende 0,5% ao mês. Maria preferiu um
// fundo de renda fixa, que rende 1% ao mês. Sabendo que João aplicou R$ 1000,00 e maria
// começou seu investimento com R$ 100,00, calcule quantos messes são necessários para
// Maria ter mais dinheiro que João.

#include <iostream>
using namespace std;

int main () {
    double joao = 1000, maria = 100;
    int meses = 0;

    while (maria <= joao) {
        joao *= 1.005;
        maria *= 1.01;
        meses++;
    }

    cout << "Meses necessarios: " << meses << endl;
    cout << "Joao: R$ " << joao << endl;
    cout << "Maria: R$ " << maria << endl;

    
    return 0;
}