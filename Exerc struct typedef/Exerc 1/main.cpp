/*1. Crie uma estrutura chamada pessoa que seja capaz de armazenar o nome, o endereço, o CPF e a idade de 5 pessoas*/

#include <iostream>
#include <cstdlib>

using namespace std;

struct pessoa{;
    string nome;
    string endereco;
    char cpf[11];
    int idade;
};

int main(void)
{
    pessoa p[2];

    for(int i = 0; i < 2; i++)
    {
      cout << "Entre com o nome: ";
      getline(cin, p[i].nome);
      cout << "Endereco: ";
      getline(cin, p[i].endereco);
      cout << "CPF: ";
      cin >> p[i].cpf;
      cout << "Idade: ";
      cin >> p[i].idade;
      system ("cls");

      cin.ignore();

    }
    for(int i = 0; i < 2; i++)
    {
    cout << p[i].nome << endl;
    cout << p[i].endereco << endl;
    cout << p[i].cpf << endl;
    cout << p[i].idade << endl;

    cout << endl;
    }


    return 0;

}
