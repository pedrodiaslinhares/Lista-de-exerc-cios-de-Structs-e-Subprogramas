#include <iostream>

using namespace std;

/*
Exerc�cio 4:

Construir um programa que calcule e apresente o resultado da convers�o de 0 a 100  graus Fahrenheit para graus Celsius.
O c�lculo dessa convers�o deve ficar isolado em  uma fun��o estar de acordo com a seguinte f�rmula: C=5/9.(F-32)
*/


double calculoConversor (double fahrenheit){
    return (5.0/9.0) * (fahrenheit - 32.0);
}

int main()
{
    for (double fahrenheit = 0; fahrenheit <= 100; fahrenheit++){

        double celsius = calculoConversor(fahrenheit);

        cout << fahrenheit << "\t\t" << celsius << endl;

    }
    return 0;
}
