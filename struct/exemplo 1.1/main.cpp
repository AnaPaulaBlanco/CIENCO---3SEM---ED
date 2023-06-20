#include <iostream>



using namespace std;

struct pessoa
{
    string nome;
    int idade;
};

int main()
{
    pessoa p;
    cout << "Qual seu nome: " << endl;

    getline(cin, p.nome);//le uma linha de caracteres
    cout << "Quantos anos voce tem? ";
    cin >> p.idade;
    cout << "Idade: " << p.idade << " anos" << endl;
    cout << "Nome: " << p.nome << endl;

    return 0;
}
