//01 – Produza um programa que receba 2 notas, referentes a um bimestre de aluno. Essas
// notas são as seguintes: I prova com peso 7 e I trabalho com peso 3. Após o programa
// receber as notas, deverá calcular elas com os pesos e gerar a média do aluno.

#include <iostream>
using namespace std;

int main () {
    double prova, trabalho;
    cout << "Nota da prova: ";
    cin >> prova;
    cout << "Nota do trabalho: ";
    cin >> trabalho;

    double media = (prova * 7 + trabalho * 3)/10;
    cout << "Média do aluno: " << media << endl;
    return 0;
}