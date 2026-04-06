#include <iostream>
using namespace std;

int main() {
    int numeroUsuario, numeroComp = 7;

    cout << "====== JOGO DE ADIVINHACAO ======" << endl;
    cout << "Chute um numero de 1 a 10: " << endl;
    cin >> numeroUsuario;

    while(numeroUsuario < 1 || numeroUsuario > 10) {
        cout << "OPS! Algo deu errado." << endl;
        cout << "Chute um numero de 1 a 10: " << endl;
        cin >> numeroUsuario;
    }

    while(numeroUsuario != numeroComp) {
        if(numeroUsuario < 1 || numeroUsuario > 10) {
            cout << "AEEEE! VOCE ACERTOU!" << endl;
        } else {
            cout << "VISH, errou hein! Tente novamente." << endl;
            cout << "Chute um numero de 1 a 10: " << endl;
            cin >> numeroUsuario;
        }
    }

    if(numeroUsuario == numeroComp) {
        cout << "AEEEE! VOCE ACERTOU!" << endl;
    }
    return 0;
}