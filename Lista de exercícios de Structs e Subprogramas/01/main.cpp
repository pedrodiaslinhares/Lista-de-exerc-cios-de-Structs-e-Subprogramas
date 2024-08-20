#include <iostream>
#include <iomanip>

using namespace std;


/*Exercício 1:
Escreva um programa que utilize um vetor de no máximo 50 alunos, contendo matrícula  e nome( )
faça a leitura dos dados e os apresente em seguida na tela.( )
O aluno deve ser  determinado através de um struct e seu nome deve ter no máximo 100 caracteres( x ). */


struct Aluno{
    char nome[101];
    int matricula;
};

int main()
{
    Aluno alunos[50];


    for (int i=0; i<50; i++){
        cout << "Digite o nome do aluno " << i+1 << ": ";
        cin >> alunos[i].nome;
        cout << "Digite o numero da matricula " << i+1 << ": ";
        cin >> alunos[i].matricula;
    }


    for (int i=0; i<50; i++){
        cout << alunos[i].nome<<" - " <<alunos[i].matricula << endl;
    }

    return 0;
}
