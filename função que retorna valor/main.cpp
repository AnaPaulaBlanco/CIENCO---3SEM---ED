// programa que verifica se 3 numeros podem ser os lados de um triangulo reto.

#include <iostream>
#include <locale.h>

using namespace std;

// funcao que calcula o quadrado de um numero

int quadrado(int n)
{
    return n * n;
}

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int s1, s2, s3;
    cout << "Entre tres inteiros: ";
    cin >> s1 >> s2 >> s3;
    if (s1 > 0 && s2 > 0 && s3 > 0 &&
        (quadrado(s1) + quadrado(s2) == quadrado(s3)
        || quadrado(s2) + quadrado(s3) == quadrado(s1)
        || quadrado(s3) + quadrado(s1) == quadrado(s2)) )

    {
        cout << " " << s1 << " " << s2 << " " << s3 << " podem formar um triangulo reto\n";
    }
    else
    {
        cout << " " << s1 << " " << s2 << " " << s3 << " nao podem formar um triangulo reto\n";
    }
}
