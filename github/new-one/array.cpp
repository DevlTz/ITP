#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int somat(int tam, int seq[]){
    if(tam == 0){
        return 0;
    }
    return seq[tam-1] + somat(tam -1, seq); // a sequencia a partir de 1
}



TEST_CASE("TESTANDO ARRAY"){
    int seq[] = {1, 6, 3, 9, 2};
    CHECK(somat(5,seq) == 21 );
}

TEST_CASE("TESTANDO ARRAY2"){
    int seq[] = {9,1, 4, 2, 3, 7, 8, 1};
    CHECK(somat(8,seq) == 35 );
}

TEST_CASE("TESTANDO ARRAY3"){
    int seq[] = {9};
    CHECK(somat(1,seq) == 9 );

}
TEST_CASE("TESTANDO ARRAY2"){
    int seq[] = {9,1, 4, 2, 3, 7, 8, 1};
    CHECK(somat(8,seq) == 35 );

}