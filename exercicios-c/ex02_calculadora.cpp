#include <iostream>
using namespace std;

int main() {
    float n1, n2, resultado;
    int escolha;

    cout << "------- CALCULADORA -------" << endl;
    cout << "1 - + (SOMA)" << endl;
    cout << "2 - - (SUBTRAÇÃO)" << endl;
    cout << "3 - x (MULTIPLICAÇÃO)" << endl;
    cout << "4 - / (DIVISÃO)" << endl;

    cout << "Escolha: " << endl;
    cin >> escolha;

    while(escolha < 1 || escolha > 5) {
        cout << "OPS! Algo deu errado." << endl;
        cout << "------- CALCULADORA -------" << endl;
        cout << "1 - + (SOMA)" << endl;
        cout << "2 - - (SUBTRAÇAO)" << endl;
        cout << "3 - x (MULTIPLICACAO)" << endl;
        cout << "4 - / (DIVISAO)" << endl;

        cout << "Escolha: " << endl;
        cin >> escolha;
    }
    
    cout << "Digite um numero: " << endl;
    cin >> n1;

    cout << "Digite um outro numero: " << endl;
    cin >> n2;

    switch (escolha)
    {
    case 1:
        resultado = n1 + n2;
        cout << "O resultado de " << n1 << " + " << n2 << " e " << resultado << endl;
        break;
    case 2:
        resultado = n1 - n2;
        cout << "O resultado de " << n1 << " - " << n2 << " e " << resultado << endl;
        break;
    case 3:
        resultado = n1 * n2;
        cout << "O resultado de " << n1 << " * " << n2 << " e " << resultado << endl;
        break;
    case 4:
        resultado = n1 / n2;
        cout << "O resultado de " << n1 << " / " << n2 << " e " << resultado << endl;
        break;
    }

    return 0;
}