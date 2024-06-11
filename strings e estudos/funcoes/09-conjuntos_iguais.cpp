#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Dadas duas sequências de inteiros, implemente uma função para verificar se duas
 * sequências são conjuntos (elementos não se repetem) iguais, ou seja se as duas
 * sequências armazenam os mesmos elementos independentemente da ordem em que eles
 * são armazenados.
 */

void conjunto(int &tam, int seq[]) {
  int conj = 0;
  
  for (int i = 0; i < tam; i++) {
    bool repete = false;
    for (int j = 0; j < conj; j++) {
      if (seq[i] == seq[j]) {
        repete = true;
        break;
      }
    }
    
    if (!repete) {
      seq[conj++] = seq[i];
    }
  }
  
  tam = conj;
}
// Caso Base padrão - Cancela e dá falso

bool iguais(int seq1[], int tam1, int seq2[], int tam2)
{
  conjunto(tam1, seq1);
  conjunto(tam2, seq2);

  if (tam1 != tam2)
  {
    return false;
  }
  else
  {
    int c = 0;
    for (int i = 0; i < tam1; i++)
    {
      for (int j = 0; j < tam1; j++)
      {
        if (seq1[i] == seq2[j])
        {
          c++;
          break;
        }
      }
    }
    return c == tam1;
  }
}


TEST_CASE("Testando com dois conjuntos iguais na mesma ordem.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 7, 1, 4, 2, 3 };
  CHECK(iguais(seq1, 5, seq2, 5) == true);
}

TEST_CASE("Testando com dois conjuntos iguais, mas fora de ordem.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 2, 3, 7, 4, 1 };
  CHECK(iguais(seq1, 5, seq2, 5) == true);
}

TEST_CASE("Testando com duas sequências de tamanho diferentes.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 7, 1, 4, 2, 3, 8, 6 };
  CHECK(iguais(seq1, 5, seq2, 7) == false);
}

TEST_CASE("Testando com duas sequências de tamanho diferentes.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 7, 1, 4 };
  CHECK(iguais(seq1, 5, seq2, 3) == false);
}

TEST_CASE("Testando com duas sequências de tamanho diferentes.") {
  int seq1[] = { 7, 1, 4, 2, 3 };
  int seq2[] = { 7, 1, 4, 2, 3, 8, 6 };
  CHECK(iguais(seq1, 5, seq2, 7) == false);
}

TEST_CASE("Testando com duas sequências vazias.") {
  int seq1[1] = { };
  int seq2[1] = { };
  CHECK(iguais(seq1, 0, seq2, 0) == true);
}

TEST_CASE("Testando com uma sequência vazia.") {
  int seq1[1] = { };
  int seq2[] = { 3, 6, 1 };
  CHECK(iguais(seq1, 0, seq2, 3) == false);
}

TEST_CASE("Testando com uma sequência vazia.") {
  int seq1[] = { 7, 2, 1 };
  int seq2[1] = { };
  CHECK(iguais(seq1, 3, seq2, 0) == false);
}


TEST_CASE("Testando com alternancia") {
  int seq1[] = { 9, 1, 4, 2, 3, 9, 10 };
  int seq2[] = { };
  CHECK(iguais(seq1, 5, seq2, 7) == false);
}