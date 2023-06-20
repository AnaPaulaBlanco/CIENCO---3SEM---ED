/*8- Em uma eleição presidencial existem dois candidatos Os votos são
informados através de códigos Os dados utilizados para a contagem dos
votos têm se a seguinte codificação 1 2 voto para os respectivos
candidatos 3 voto nulo 4 voto em branco Elabore um programa em C++
que leia o código do candidato em um voto Como finalizador do conjunto
de votos, tem se o valor 0 Calcule e escreva 1 percentual de votos para
cada candidato 2 percentual de votos nulos 3 percentual de votos em
branco*/

#include <iostream>

using namespace std;

int  main ( int argc, char  const *argv[])
{
	menu int = 1 ;
	float candidato1 = 0 , candidato2 = 0 , nulos = 0 , brancos = 0 , total = 0 ;
	fazer
	{
		cout << " ELEICOES 2022 \n " ;
		cout << " ESCOLHA UMA DAS OPÇÕES: \n " ;
		cout << " [1] - Candidato 1 \n " ;
		cout << " [2] - Candidato 2 \n " ;
		cout << " [3] - Nulo \n " ;
		cout << " [4] - Branco \n " ;
		cout << " [0] - Sair \n " ;
		cin >> menu;
		interruptor (menu)
		{
		caso  1 :
			candidato1 = candidato1 + 1 ;
			quebrar ;
		caso  2 :
			candidato2 = candidato2 + 1 ;
			quebrar ;
		caso  3 :
			nulos = nulos + 1 ;
			quebrar ;
		caso  4 :
			brancos = brancos + 1 ;
			quebrar ;
        caso  0 :
			quebrar ;
		padrão :
            cout << " CODIGO INVALIDO " << endl;
			quebrar ;
		}
	}
	 while (menu != 0 );
        total = candidato1 + candidato2 + nulos + brancos;
        cout << " Candidato 1 ============= " << (candidato1 / total) * 100 << " % \n " ;
		cout << " Candidato 2 ============== " << (candidato2 / total) * 100 << " % \n " ;
		cout << " Nulos =================== " << (nulos / total) * 100 << " % \n " ;
		cout << " Brancos ================= " << (brancos / total) * 100 << " % \n " ;
		cout << " /////////////////////////////////////// \n  " ;
		cout << " Total de Votos ========== " << total << " \n " ;
	retorna  0 ;
}
