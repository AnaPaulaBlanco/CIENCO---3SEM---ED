/*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, com
um dígito após o ponto decimal.
Entrada
A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante.
Pelo menos um destes números será positivo.
Saída
O primeiro valor de saída é a quantidade de valores positivos. A próxima linha deve
mostrar a média dos valores positivos digitados.*/

#include <iostream>
#define n 6

using namespace std;

int maior(int a[])
{
    int i, max;
    //Achar o mair valor do array
    max = a[0];
    i= 1;
    while (i > 0)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        i = i + 1;
    }
   return max;
}

int main()
{
    int i, valor[TAMANHO];
    i = 0;
    while (i < TAMANHO)
    {
        cout << "Entre um inteiro: ";
        cin >> valor[i];
        i = i + 1;
    }
    cout << "Valores positivos " << a[i] << endl;

    return 0;
}
