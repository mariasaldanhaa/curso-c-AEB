#include <iostream> // inclui biblioteca de entrada e saída
using namespace std;

int main() {
    int idade;
    string nome;

    // entrada de dados
    // << - enviando
    // >> - atribuindo
    cout << "Digite seu nome: "; // printf
    cin >> nome; // scanf

    cout << "Digite sua idade: ";
    cin >> idade;

    // endl - pula para a próxima linha e limpa o "buffer"
    cout << "Olá, " << nome << "! Você tem " << idade << " anos." << endl;

    return 0;
}