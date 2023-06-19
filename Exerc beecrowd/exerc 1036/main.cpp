/*Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara.
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”,
caso haja uma divisão por 0 ou raiz de numero negativo.
Entrada
Leia três valores de ponto flutuante (double) A, B e C.
Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular".
Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem
correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.*/

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
