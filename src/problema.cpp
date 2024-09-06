#include <iostream>
#include <vector>
#include <algorithm>
#include "binario.h"
#include "genetico.h"
using namespace std;

int main()
{
	// Os 6 valores digitados pelo usu�rio guardados em um vector
	cout << "Entre com 6 solu��es iniciais (n�meros entre 0 e 65535):\n";
	vector<int> nums;
	for (int i{ 0 }; i <= 5; ++i)
	{
		int valor; cin >> valor;
		nums.push_back(valor);
	}

	cout << "\nResultado da Avalia��o\n";
	cout << "-----------------------\n";

	// chamada da fun��o avali��o para mostrar os pesos e valores, juntamente com o resultado se cabe na mochila ou n�o
	for (int i : nums)
	{
		if (avaliacao(i))
		{
			cout << "\033[32m" << "OK" << "\033[m" << '\n';
		}
		else
		{
			cout << "\033[31m" << "X" << "\033[m" << '\n';
		}
	}

	cout << "-----------------------\n";

	// invers�o do vetor e aloca��o dos seus valores para vari�veis diferentes para que possa armazenar os valores que ser�o obtidos pelas fun��es
	reverse(nums.begin(), nums.end());
	unsigned short primeiro = nums.back(); nums.pop_back();
	unsigned short segundo = nums.back(); nums.pop_back();
	unsigned short terceiro = nums.back(); nums.pop_back();
	unsigned short quarto = nums.back(); nums.pop_back();
	unsigned short quinto = nums.back(); nums.pop_back();
	unsigned short sexto = nums.back(); nums.pop_back();

	// fun��es gen�ticas
	unsigned short CruzamentoPontoUnico = cruzamentoPontoUnico(primeiro, segundo);
	unsigned short CruzamentoAritmetico = cruzamentoAritmetico(terceiro, quarto);
	unsigned short MutacaoSimples = mutacaoSimples(quinto);
	unsigned short MutacaoDupla = mutacaoDupla(sexto);

	// armazena os valores para que possa ser rodado num la�o
	nums = { CruzamentoPontoUnico, CruzamentoAritmetico, MutacaoSimples, MutacaoDupla };

	// novamente a chamada da fun��oa valia��o para mostrar os valores na tela
	for (int i : nums)
	{
		if (avaliacao(i))
		{
			cout << "\033[32m" << "OK" << "\033[m" << '\n';
		}
		else
		{
			cout << "\033[31m" << "X" << "\033[m" << '\n';
		}
	}
}