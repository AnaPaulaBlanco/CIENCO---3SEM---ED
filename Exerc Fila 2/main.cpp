/*Escreva um programa em C++ que simule um sistema de atendimento em um banco.O programa deve permitir que o usuário realize as seguintes operações:
Abrir uma nova conta:
O programa deve solicitar ao usuário o nome do cliente e o saldo inicial da conta.
Em seguida, deve criar uma nova conta com os dados fornecidos e adicionar a conta a uma fila de espera para ser atendida por um atendente.
Atender o próximo cliente:
O programa deve remover a próxima conta da fila de espera e exibir as informações do cliente que está sendo atendido, incluindo o nome e o saldo atual da conta. Em seguida, o atendente deve solicitar ao cliente a operação que deseja realizar, que pode ser depósito, saque ou consulta de saldo.
Após o cliente escolher a operação desejada, o programa deve solicitar o valor a ser depositado, sacado ou consultado e atualizar o saldo da conta correspondente.
Encerrar o programa:
O programa deve permitir ao usuário encerrar o programa.
Dica:
// Estrutura para representar uma conta bancária
struct Conta {
string cliente;
double saldo;
};
queue <Conta> filaEspera;*/

#include <iostream>
#include <queue>

using namespace std;

int main()
{
    queue <string> clientes, filaAux;
    string cliente;
    double saldo;
    int opcao;

    do
    {
        cout << "Escolha a opcao: " << endl;
        cout << "1 - Inserir cliente." << endl;
        cout << "2 - Atender o proximo cliente. " << endl;
        cout << "3 - Exibir fila de espera. " << endl;
        cout << "4 - Encerrar o programa. " << endl;
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            cout << "Nome do cliente: ";
            cin >> nome;
            pessoas.push(nome);
            break;

        case 2:
            cout << "Cliente sendo atendido. " << nome << endl;
            pessoas.pop();
            break;

        case 3:
        if (!pessoas.empty()){
            filaAux = pessoas;
        }
        while (!filaAux.empty())
        {
            cout << filaAux.front();
            filaAux.pop();
        }

        case 4:
            cout << "Programa encerrado.";
            break;
        }
    }
    while (opcao != 4);


    return 0;
}

