#include <iostream>

using namespace std;
/*
Exercício 7:

Faça uma função que recebe a idade de uma pessoa em anos, meses e dias e retorna essa  idade expressa em dias.

(Considerei 30 dias por mes e 365 dias por ano)

*/

int calculoDias (int anos, int meses, int dias){
    const int diasAno = 365;
    const int diasMes = 30;

    int totalDias = (anos * diasAno) + (meses * diasMes) + dias;

    return  totalDias;
}


int main()
{
    int anos, meses, dias;

    cout << "Digite a idade em anos: ";
    cin >> anos;
    cout << "Digite quantos meses: ";
    cin >> meses;
    cout << "Digite quantos dias: ";
    cin >> dias;

    int idadeEmDias = calculoDias(anos, meses, dias);

    cout << "Seus dias de vida ate o momento sao: " << idadeEmDias << endl;

    return 0;
}
