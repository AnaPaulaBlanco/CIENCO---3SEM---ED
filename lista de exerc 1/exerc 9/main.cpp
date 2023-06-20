/*9 Faça um programa em C++ que leia dez conjuntos de dois valores, o primeiro
representando o número do aluno e o segundo a sua altura em centímetros
Encontre o aluno mais alto e o mais baixo Exiba o número do aluno mais
baixo o número de aluno mais alto e as respectivas alturas*/

#include <iostream>

using namespace std;

int main()
{
    int contador = 0 ,alunosCodigo[ 10 ], alunoMaisBaixoCodigo = 0 ,alunoMaisAltoCodigo = 0 ;
	float alunoMaisBaixoAltura = 0 , alunoMaisAltoAltura = 0 , alunosAltura[ 10 ];
	cout << " INFORME O CODIGO E ALTURA DE 10 ALUNOS " << endl;;
	cout << " --------------------------------------- " << endl;
	enquanto (contador < 10 )
	{
		int codigoAluno = contador + 1 ;
		cout << " INFORME A ALTURA DO ALUNO DE CODIGO: " << codigoAluno << endl;
		alunosCodigo[contador] = contador;
		cin >> alunosAltura[contador];
		if ((alunoMaisBaixoAltura == 0 ) || (alunosAltura[contador] <alunoMaisBaixoAltura))
		{
			alunoMaisBaixoCodigo = codigoAluno;
			alunoMaisBaixoAltura = alunosAltura[contador];
		}
		if ((alunoMaisAltoAltura == 0 ) || (alunosAltura[contador] > alunoMaisAltoAltura))
		{
			alunoMaisAltoCodigo = codigoAluno;
			alunoMaisAltoAltura = alunosAltura[contador];
		}
		contador = contador + 1 ;
	}
	cout << " O ALUNO MAIS BAIXO E: " << alunoMaisBaixoCodigo << " E TEM " <<
		 alunoMaisBaixoAltura << " DE ALTURA " << endl;
	cout << " O ALUNO MAIS ALTO E: " << alunoMaisAltoCodigo << " E TEM " <<
		 alunoMaisAltoAltura << " DE ALTURA " << endl;
	retorna  0 ;
}
