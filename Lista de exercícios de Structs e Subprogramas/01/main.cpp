#include <iostream>
#include <iomanip>

using namespace std;


/*Exerc�cio 1:
Escreva um programa que utilize um vetor de no m�ximo 50 alunos, contendo matr�cula  e nome( )
fa�a a leitura dos dados e os apresente em seguida na tela.( )
O aluno deve ser  determinado atrav�s de um struct e seu nome deve ter no m�ximo 100 caracteres( x ). */


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
