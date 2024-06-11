#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Implemente uma função para verificar se duas matrizes são iguais, ou seja se para
 * cada elemento de uma matriz o elemento de mesma linha e coluna da outra matriz são
 * iguais.
 * Sua função deve receber como parâmetro a primeira matriz seguida de suas dimensões
 * e depois a segunda matriz seguida de suas dimensões. A função deve retornar verdadeiro
 * se todos os elementos forem iguais ou falso caso contrário.
 */

const int TAM_MAX = 20;

bool eh_igual(int a[TAM_MAX][TAM_MAX], int lin1, int col1, int b[TAM_MAX][TAM_MAX], int lin2, int col2)
{
  int col;
  int lin;
  
  if ((lin1 != lin2) || (col1 != col2))
  {
    return false;
  }
  
  for (int i = 0; i < lin1; i++)
  {
    for (int j = 0; j < col1; j++)
    {
      if (a[i][j] != b[i][j])
      {
        return false;
      }
    }
  }

  return true;
}

TEST_CASE("Testando matrizes com as mesmas dimensões.") {
  int a[TAM_MAX][TAM_MAX] = {
    { 7, 1, 4, 2 },
    { 1, 2, 1, 9 },
    { 4, 1, 7, 0 }
  };
  int b[TAM_MAX][TAM_MAX] = {
    { 7, 1, 4, 2 },
    { 1, 2, 1, 9 },
    { 4, 1, 7, 0 }
  };
  CHECK(eh_igual(a, 3, 4, b, 3, 4) == true);
}

TEST_CASE("Testando matrizes com as mesmas dimensões, mas elementos diferentes.") {
  int a[TAM_MAX][TAM_MAX] = {
    { 7, 1, 4, 2 },
    { 1, 2, 1, 9 },
    { 4, 1, 7, 0 }
  };
  int b[TAM_MAX][TAM_MAX] = {
    { 7, 1, 4, 2 },
    { 1, 2, 1, 9 },
    { 4, 1, 5, 0 }
  };
  CHECK(eh_igual(a, 3, 4, b, 3, 4) == false);
}

TEST_CASE("Testando matrizes com as dimensões diferentes.") {
  int a[TAM_MAX][TAM_MAX] = {
    { 7, 1, 4, 2 },
    { 1, 2, 1, 9 }
  };
  int b[TAM_MAX][TAM_MAX] = {
    { 7, 1, 4, 2 },
    { 1, 2, 1, 9 },
    { 4, 1, 5, 0 },
  };
  CHECK(eh_igual(a, 2, 4, b, 3, 4) == false);
}