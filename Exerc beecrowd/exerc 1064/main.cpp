/*Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos.
Na pr�xima linha, deve-se mostrar a m�dia de todos os valores positivos digitados, com
um d�gito ap�s o ponto decimal.
Entrada
A entrada cont�m 6 n�meros que podem ser valores inteiros ou de ponto flutuante.
Pelo menos um destes n�meros ser� positivo.
Sa�da
O primeiro valor de sa�da � a quantidade de valores positivos. A pr�xima linha deve
mostrar a m�dia dos valores positivos digitados.*/

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
