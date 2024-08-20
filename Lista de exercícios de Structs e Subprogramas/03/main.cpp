#include <iostream>

using namespace std;


/*
Exercício 3:
Supondo que a população de um país "a" seja de 90.000.000 de habitantes, com uma  taxa anual de crescimento de 3 porcento,
E que a população de um país "b" seja,  aproximadamente, de 200.000.000 de habitantes, com uma taxa anual de crescimento de  1,5 porcento.
Fazer um programa para calcular e mostrar o número de anos necessários  para que a população do país "a" ultrapasse ou seja igual a população do país "b",  mantidas essas taxas de crescimento.
O cálculo deve ser realizado por uma função separada que retorna apenas o número de  anos.
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
