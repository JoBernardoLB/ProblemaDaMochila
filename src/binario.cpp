// liga um único bit da posição que for desejada
unsigned short ligarBit(unsigned short valor, int posicao)
{
    return valor | (1 << posicao);
}

// desliga um único bit da posição que for desejada
unsigned short desligarBit(unsigned short valor, int posicao)
{
    unsigned short mascara = ~(1 << posicao);
    return valor & mascara;
}

// testa se o bit está ligado ou não
bool testarBit(unsigned short valor, int posicao)
{
    // Verifica se o bit na posição especificada está definido (1)
    return (valor & (1 << posicao));
}

// operação de AND entre dois inteiros
unsigned short andBinario(unsigned short v1, unsigned short v2) 
{
    return v1 & v2;
}

// operação de OR entre dois inteiros
unsigned short orBinario(unsigned short v1, unsigned short v2)
{
    return v1 | v2;
}

// retorna os 8 valores mais baixos do binários de 16 bits
unsigned short bitsBaixos(unsigned short valor)
{
    return valor & 255;
}

// retorna os 8 valores mais altos do binários de 16 bits
unsigned short bitsAltos(unsigned short valor)
{
    return valor & 65280;
}