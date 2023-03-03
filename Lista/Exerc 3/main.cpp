/*Faça um programa em C++ que receba o número de horas trabalhadas e o
valor do salário mínimo Calcule e mostre o salário a receber seguindo as
regras abaixo
a.A hora trabalhada vale a metade do salário mínimo
b.O salário bruto equivale ao número de horas trabalhadas multiplicado
pelo valor da hora trabalhada
c.O imposto equivale a 3% do salário bruto
d.O salário a receber equivale ao salário bruto menos o imposto*/

#include <iostream>

using namespace std;

int main()
{
    float horaextra = 651, salario = 1302, salarioFinal, hora,horaextraB;
    cout << "Fez quantas horas extras? " ;
    cin >> hora;

    cout << horaextra * hora;
    cin >> horaextraB;
    cout << horaextraB+salario;

    return 0;
}
