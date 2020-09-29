#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy(numerator, denominator)"){
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 7) == false);
    CHECK(isDivisibleBy(7, 0) == false);
    CHECK(isDivisibleBy(-18, 9) == true);
}

TEST_CASE("isPrime(integer)"){
    //base cases
    CHECK(isPrime(-1) == false); //does this go here??
    CHECK(isPrime(0) == false);
    CHECK(isPrime(1) == false);
    CHECK(isPrime(2) == true);
    //small numbers
    CHECK(isPrime(3) == true);
    CHECK(isPrime(4) == false);
    CHECK(isPrime(29) == true);
    CHECK(isPrime(33) == false);
    //large numbers
    CHECK(isPrime(15485653) == true);
    CHECK(isPrime(19685752) == false);
}

TEST_CASE("nextPrime(integer)"){
    CHECK();
}