// 06 – No mundo utilizamos algumas medidas de temperaturas são elas: Celsius, Kelvin e
// Fahrenheit. No Brasil a medida oficial para marcar temperatura é a Celsius. Então, realize
// um programa em C++ que faça a conversão das temperaturas de Celsius para Kelvin ou
// Fahrenheit.

// • O programa deverá receber do usuário a temperatura em Celsius;
// • Após isso perguntar para qual escala ele quer converter. Caso digite “F”, o
// programa deverá realizar a conversão para Fahrenheit. Caso digite “K”, o
// programa deverá fazer a conversão para Kelvin;

// • Utilize as fórmulas: K = °C + 273 e F = (°C x 1,8) + 32.
// • Utilize a estrutura de decisão CASE

#include <iostream>
#include <cctype>
using namespace std;

int main () {
    char escala;
    double celsius;

    cout << "Temperatura em Celsius: ";
    cin >> celsius;
    cout << "Converta para (F) Fahrenheit ou (K) Kelvin: ";
    cin >> escala;
    escala = toupper(escala);

    switch (escala) {
        case 'F':
            cout << "Fahrenheit: " << (celsius * 1.8) + 32 << endl;
            break;
        case 'K':
            cout << "Kelvin: " << celsius + 273 << endl;
            break;
        default:
            cout << "Opcao invalida." << endl;
    }

    return 0;
}