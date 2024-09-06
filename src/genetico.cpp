#include "binario.h"
#include <iostream>
using namespace std;

// imprime os pesos e valores totais e retorna a avaliação se o número digitado é uma boa escolha e cabe na mochila ou não
bool avaliacao(unsigned short valor)
{
	int pesos[] = {12, 3, 5, 4, 9, 1, 2, 3, 4, 1, 2, 4, 5, 2,4 ,1};
	int valores[] = { 4, 4, 8, 10, 15, 3, 1, 1, 2, 10, 20, 15, 10, 3, 4, 12};
	int pesoTotal = 0;
	int valorTotal = 0;

	for (int i{ 0 }; i < 16; ++i)
	{
		if (valor & (32768 >> i))
		{
			pesoTotal += pesos[i];
			valorTotal += valores[i];
		}
	}
	cout << right; cout.width(5); cout << valor; cout << " - $" << valorTotal << " - "; cout << right; cout.width(2); cout << pesoTotal << "Kg - ";
	
	if (pesoTotal <= 20)
		return true;
	else
		return false;
}

// retorna o novo inteiro com bits altos do primeiro inteiro e baixos do segundo
unsigned short cruzamentoPontoUnico(unsigned short v1, unsigned short v2)
{
	return orBinario(bitsAltos(v1), bitsBaixos(v2));
}

// faz um AND binário entre o quarto e o décimo terceiro bits de cada um dos dois inteiros e retorna o novo valor
unsigned short cruzamentoAritmetico(unsigned short v1, unsigned short v2)
{
	return andBinario(andBinario(v1, 4128), andBinario(v2, 4128));
}

// muda um valor de um bit
unsigned short mutacaoSimples(unsigned short valor)
{
	if (testarBit(valor, 9))
	{
		return desligarBit(valor, 9);
	}
	else
	{
		return ligarBit(valor, 9);
	}
}

// muda o valor de dois bits
unsigned short mutacaoDupla(unsigned short valor)
{
	if (testarBit(valor, 12))
	{
		valor = desligarBit(valor, 12);
	}
	else
	{
		valor = ligarBit(valor, 12);
	}
	if (testarBit(valor, 3))
	{
		valor = desligarBit(valor, 3);
	}
	else
	{
		valor = ligarBit(valor, 3);
	}
	return valor;
}


