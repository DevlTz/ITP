#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

/*
 * Altere a função `pares()` abaixo de forma que ela retorne a quantidade de
 * dígitos pares do número passado como parâmetro.
 * Por exemplo, o número 19274 tem dois dígitos pares: 2 e 4.
 */

unsigned int pares(unsigned int numero) {
  int count = 0; // Contador
  if(numero==0){
    return 1;
  }

  while(numero> 0){
    int par_imp = numero %2;
  
    if (par_imp == 0){
     
      count++; // Se o verificador for == 1 -> Impar ;; 4 -> Par. Adiciona em diante
      }
      numero = numero/10;  
  } 
  return count;

  // altere essa função, mas não altere seus parâmetros.
  return 0;
}

TEST_CASE("Testando a função pares()") {
  CHECK(pares(374) == 1);
  CHECK(pares(19274) == 2);
  CHECK(pares(0) == 1);
  CHECK(pares(15793) == 0);
  CHECK(pares(50773) == 1);
  CHECK(pares(48266) == 5);
}



