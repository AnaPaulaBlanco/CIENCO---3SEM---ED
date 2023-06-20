#include <iostream>
#include <cstdlib>

using namespace std;

struct data{;
    int dia;
    int mes;
    int ano;
};

int main(void)
{
   data hoje;
   hoje.dia = 24;
   hoje.mes = 8;
   hoje.ano = 2019;
   cout << "Hoje e " << hoje.dia << "/" << hoje.mes << "/" << hoje.ano << endl;
   system("pause");

   return 0;
}
