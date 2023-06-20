#include <iostream>

using namespace std;

int main()
{
    //char nome[] = {'r', 'o', 'd', 'r', 'i', 'g', 'o'};
    char nome[] = "rodrigo";
    int i = 0;
    /*
    '\0' é um caracter null, com o valor numerico 0 é considerado false
    Uma string é um arrau de caracteres, apesar de ser um array,
    deve-se ficar atento para o fato de que as strings têm no elemento
    seguinte a ultima letra da palavra/ frase armazenada, um caractere '\0'.
    */

    //while (nome[i])
    while (nome[i] != '\0')
    {
        cout << nome[i];
        i++;
    }
    return 0;
}
