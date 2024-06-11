#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

int pot(int bas, int exp){
    if (exp == 0){
        return 1;
    }

    return bas * pot(bas, exp - 1);
}

TEST_CASE("TESTANDO POT"){
    CHECK(pot(2,3) == 8 );
    CHECK(pot(4,4) == 256 );
    CHECK(pot(5,0) == 1 );
    CHECK(pot(3,3) == 27 );
    
}