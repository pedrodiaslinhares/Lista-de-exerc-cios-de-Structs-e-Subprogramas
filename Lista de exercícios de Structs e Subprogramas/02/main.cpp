#include <iostream>

using namespace std;

/*Exerc�cio 2:
Construir um programa que na fun��o main leia 3 valores informados pelo usu�rio
 e  utilize uma fun��o para retornar o maior deles.
 Em seguida, a fun��o main deve  imprimir o resultado
*/

float valorMaior(float a, float b, float c) {
    float maior = a;
    if (b > maior) {
        maior = b;
    }
    if (c > maior) {
        maior = c;
    }
    return maior;
}


int main()
{
    float valor[3];

    for (int i=0; i<3; i++){
    cout << "Digite o valor " << i+1 << ": ";
    cin >> valor[i];
    }

    float maior = valorMaior(valor[0], valor[1], valor[2]);

    cout << "O maior valor e: " << maior << endl;

    return 0;
}
