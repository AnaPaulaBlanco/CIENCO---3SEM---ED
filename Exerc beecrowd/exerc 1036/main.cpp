/*Leia 3 valores de ponto flutuante e efetue o c�lculo das ra�zes da equa��o de Bhaskara.
Se n�o for poss�vel calcular as ra�zes, mostre a mensagem correspondente �Impossivel calcular�,
caso haja uma divis�o por 0 ou raiz de numero negativo.
Entrada
Leia tr�s valores de ponto flutuante (double) A, B e C.
Sa�da
Se n�o houver possibilidade de calcular as ra�zes, apresente a mensagem "Impossivel calcular".
Caso contr�rio, imprima o resultado das ra�zes com 5 d�gitos ap�s o ponto, com uma mensagem
correspondente conforme exemplo abaixo. Imprima sempre o final de linha ap�s cada mensagem.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float A, B, C, delta, R1, R2;

    cout << "Entre com o valor de A: ";
    cin >> A;

    cout << "Entre com o valor de B: ";
    cin >> B;

    cout << "Entre com o valor de C: ";
    cin >> C;

    delta = ((B * B) - 4 * A * C);

    cout << "Delta: " << delta;
    cout << endl;

    if (delta < 0)
    {
        cout << "Impossivel calcular!" << endl;

    }

    else (delta > 0);
    {
        R1 = (((B *  -1) + sqrt (delta))/ (2 * A));
        R2 = (((B * -1) - sqrt (delta))/ (2 * A));

        cout << "R1: " << R1 << endl;
        cout << "R2: " << R2;
    }



}
