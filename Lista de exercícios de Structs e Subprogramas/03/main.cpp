#include <iostream>

using namespace std;


/*
Exerc�cio 3:
Supondo que a popula��o de um pa�s "a" seja de 90.000.000 de habitantes, com uma  taxa anual de crescimento de 3 porcento,
E que a popula��o de um pa�s "b" seja,  aproximadamente, de 200.000.000 de habitantes, com uma taxa anual de crescimento de  1,5 porcento.
Fazer um programa para calcular e mostrar o n�mero de anos necess�rios  para que a popula��o do pa�s "a" ultrapasse ou seja igual a popula��o do pa�s "b",  mantidas essas taxas de crescimento.
O c�lculo deve ser realizado por uma fun��o separada que retorna apenas o n�mero de  anos.
*/


int calculoAnos (double populacaoA, double taxaDeA, double populacaoB, double taxaDeB) {
int anos = 0;

    double decimalA = taxaDeA / 100.0;
    double decimalB = taxaDeB / 100.0;

     while (populacaoA < populacaoB) {
        populacaoA += populacaoA * decimalA;
        populacaoB += populacaoB * decimalB;
        anos++;
    }

    return anos;
}



int main()
{
    double populacaoA = 90000000;
    double taxaDeA = 3.0;
    double populacaoB = 200000000;
    double taxaDeB = 1.5;

    int anosNecessarios = calculoAnos(populacaoA, taxaDeA, populacaoB, taxaDeB);

    cout << "Numero de anos para que 'A' ultrapasse ou seja igual a populacao de 'B': " << anosNecessarios << " anos." << endl;

    return 0;
}
