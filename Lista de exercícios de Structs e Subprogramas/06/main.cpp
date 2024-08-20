#include <iostream>

using namespace std;

/*
Exerc�cio 6:
Fa�a uma fun��o que recebe, por par�metro, a altura (alt) e o sexo de uma pessoa e retorna o seu peso ideal.
Para homens, calcular o peso ideal usando a f�rmula peso ideal = 72.7 x alt - 58 e, para  mulheres, peso ideal = 62.1 x alt - 44.7.
*/

double calcularPeso(double altura, char sexo) {
    double pesoIdeal;
    if (sexo == 'M' || sexo == 'm') {
        pesoIdeal = 72.7 * altura - 58;
    } else if (sexo == 'F' || sexo == 'f') {
        pesoIdeal = 62.1 * altura - 44.7;
    } else {
        cerr << "Sexo inv�lido. Use 'M' para masculino ou 'F' para feminino." << endl;
        return -1;
    }

    return pesoIdeal;
}

int main(){

    double altura;
    char sexo;

    cout << "Informe a altura em metros: ";
    cin >> altura;
    cout << "Informe o sexo, Masculino(M) ou Feminino(F): ";
    cin >> sexo;

    double pesoIdeal = calcularPeso(altura, sexo);

    if (pesoIdeal != -1) {
        cout << "O peso ideal e: " << pesoIdeal << " kg" <<endl;
    }

    return 0;
}

