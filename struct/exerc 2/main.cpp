/* 2. Crie uma estrutura chamada animal que deve armazenar as seguintes informaçoes sobre cada animal:
nome do animal string
especie do animal string
idade do animal int
peso do animal em kg int
criar typedef listaAnimais que deve ser um vetor de 10 elementos do tipo animal
criar  programa que solicita os dados de 10 animais e armazena esse dados em uma variavel listaAnimais
exibir os dados dos 10 animais.*/

#include <iostream>
#include <cstdlib>
#define n 10

using namespace std;

typedef struct
{   string nomeAnimal;
    string especie;
    int idade;
    int peso;
}Animal;

int main(void)
{
    Animal a[n];

    for(int i = 0; i < n; i++)
    {
      cout << "Entre com o nome do animal: ";
      getline(cin, a[i].nomeAnimal);
      cout << "Especie: ";
      getline(cin, a[i].especie);
      cout << "Idade: ";
      cin >> a[i].idade;
      cout << "Peso: ";
      cin >> a[i].peso;
      system ("cls");

      cin.ignore();

    }
    for(int i = 0; i < n; i++)
    {
    cout << a[i].nomeAnimal << endl;
    cout << a[i].especie << endl;
    cout << a[i].idade << endl;
    cout << a[i].peso << endl;

    cout << endl;
    }


    return 0;

}
