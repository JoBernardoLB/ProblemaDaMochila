# Problema da Mochila com Algoritmos Genéticos

## Descrição

Este projeto aborda a solução do Problema da Mochila utilizando algoritmos genéticos. O Problema da Mochila é um clássico problema de otimização onde o objetivo é maximizar o valor dos itens em uma mochila sem exceder a capacidade de peso da mesma. No contexto deste projeto, a mochila suporta até 20 kg e há 16 objetos com pesos e valores definidos.

O sistema é capaz de ler uma sequência de soluções iniciais, aplicar operadores genéticos (cruzamento e mutação), e avaliar a viabilidade dessas soluções.

## Objetivo

O objetivo do programa é:

1. **Ler 6 soluções iniciais**: Números entre 0 e 65535, cada um representando uma sequência de 16 bits que indica quais objetos estão incluídos na mochila.
2. **Aplicar operadores genéticos**:
   - **Cruzamento**:
     - **Ponto Único**: Gera uma nova solução a partir de duas existentes.
     - **Aritmético**: Gera uma nova solução usando o bit 1 em posições onde ambas soluções iniciais têm 1 e 0 caso contrário.
   - **Mutação**:
     - **Simples**: Modifica um bit da solução.
     - **Dupla**: Modifica dois bits da solução.
3. **Avaliar as soluções**: Verificar se as soluções geradas atendem à capacidade da mochila e calcular o valor total de cada solução.

## Tabela de Objetos

| Objeto | Peso (Kg) | Valor ($) |
|--------|-----------|-----------|
| A      | 12        | 4         |
| B      | 3         | 4         |
| C      | 5         | 8         |
| D      | 4         | 10        |
| E      | 9         | 15        |
| F      | 1         | 3         |
| G      | 2         | 1         |
| H      | 3         | 1         |
| I      | 4         | 2         |
| J      | 1         | 10        |
| K      | 2         | 20        |
| L      | 4         | 15        |
| M      | 5         | 10        |
| N      | 2         | 3         |
| O      | 4         | 4         |
| P      | 1         | 12        |

## Funcionalidades

- **Entrada**: Recebe 6 números inteiros entre 0 e 65535 como soluções iniciais.
- **Processamento**:
  - Aplica cruzamento ponto único e cruzamento aritmético nas soluções.
  - Realiza mutação simples e dupla nas soluções.
- **Saída**:
  - Exibe a sequência de bits para as soluções iniciais e suas versões após aplicação dos operadores genéticos.
  - Avalia e exibe o valor total e o peso de cada solução, indicando se a solução é válida ou não.

## Exemplo de Uso

1. **Compilação**: Para compilar o projeto, use o `Makefile` incluído:
   ```bash
   make
   ```

2. **Execução**: Execute o programa compilado:
   ```bash
   ./problema.exe
   ```

3. **Entrada**: Digite 6 números inteiros entre 0 e 65535 quando solicitado.

4. **Saída**: O programa exibirá as soluções iniciais e geradas, seguidas pela avaliação de cada uma.

## Arquivos

- `problema.cpp`: Implementação principal do programa.
- `binario.cpp`, `binario.h`: Funções auxiliares para manipulação de dados binários.
- `genetico.cpp`, `genetico.h`: Implementação dos operadores genéticos.
- `Makefile`: Script para automação da compilação.
- `README.md`: Documentação do projeto.

## Contribuições

Se você deseja contribuir para este projeto, fique à vontade para fazer um fork e enviar um pull request com suas alterações.
