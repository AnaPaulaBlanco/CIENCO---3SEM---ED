/*Neste problema, voc� dever� ler 3 palavras que definem o tipo de animal poss�vel segundo o
esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi
escolhido, atrav�s das tr�s palavras fornecidas*/

#include <iostream>
#include <cstdlib>
#define n 1

using namespace std;

typedef struct
{   string tipo;
    string especie;
    string alimento, vertebrado, ave, carnivoro;;
}Animal;

int main(void)
{

    Animal a[n];

    for(int i = 0; i < n; i++)
    {
      cout << "Entre com o tipo (vertebrado/ invertebrado): ";
      getline(cin, a[i].tipo);
      cout << "Especie: ";
      getline(cin, a[i].especie);
      cout << "tipo alimenta��o: ";
      getline(cin, a[i].alimento);

      system ("cls");

      cin.ignore();
    }

    for(int i = 0; i < n; i++)
    {
        if(a[i].vertebrado = a[i].ave = a[i].carnivoro)
        {
        cout << "Aguia";
        }
    }








    return 0;

}
