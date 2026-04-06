#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double velocidade, angulo;

    cout << "------ SIMULADOR DE FOGUETE ------" << endl;
    cout << "Digite a velocidade de partida (m/s): " << endl;
    cin >> velocidade;

    cout << "Digite o angulo de inclinacao (0 a 90 graus): " << endl;
    cin >> angulo;

    double radianos = angulo * (M_PI / 180);
    double v0x = velocidade * cos(radianos);
    double v0y = velocidade * sin(radianos);
    double hMax = pow(v0y, 2) / (2 * 9.81);
    double tTotal = 2 * v0y / 9.81;
    double dTotal = v0x * tTotal;

    cout << "------ RESULTADO DO VOO ------ " << endl;
    cout << "Altura maxima atingida: " << hMax << endl;
    cout << "Distancia total percorrida: " << dTotal << endl;
    cout << "Tempo total de voo: " << tTotal << endl;

    return 0;
}