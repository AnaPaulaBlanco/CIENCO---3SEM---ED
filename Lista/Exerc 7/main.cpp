/*Escreva um programa em C++ que escreva todos os números múltiplos de 5
no intervalo de 1 a 500*/

#include <iostream>

using namespace std;

int main()
{
    int num=500, mult = 0;

    for ( int i = 1; i <= num; i++)
    {
      mult = i % 5 == 0;
      cout << i;
    }
}
