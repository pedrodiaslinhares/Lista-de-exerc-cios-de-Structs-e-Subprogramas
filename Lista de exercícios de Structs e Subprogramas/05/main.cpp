#include <iostream>

using namespace std;

/*
Faça um procedimento que recebe a idade de um nadador por parâmetro e informa a  categoria desse nadador de acordo com a tabela abaixo:
IDADE                           CATEGORIA

5 a 7 anos                      Infantil A
8 a 10 anos 	                Infantil B
11-13 anos                      Juvenil A
14-17 anos                      Juvenil B
Maiores de 18 anos(inclusive)   Adulto

*/

int categorias(int idade) {
    if (idade >= 5 && idade <= 7) {
        cout << "Categoria: Infantil A" << endl;
    } else if (idade >= 8 && idade <= 10) {
        cout << "Categoria: Infantil B" << endl;
    } else if (idade >= 11 && idade <= 13) {
        cout << "Categoria: Juvenil A" << endl;
    } else if (idade >= 14 && idade <= 17) {
        cout << "Categoria: Juvenil B" << endl;
    } else if (idade >= 18 ; idade <= 90) {
        cout << "Categoria: Adulto" << endl;
    } else {
        cout << "Idade invalida para as categorias." << endl;
    }
}


int main()
{
    int idade;
    cout << "Informe a idade do nadador: ";
    cin >> idade;

    categorias(idade);
    return 0;
}
