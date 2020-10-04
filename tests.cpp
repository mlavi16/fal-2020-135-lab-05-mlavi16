#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy(numerator, denominator)") {
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 7) == false);
    CHECK(isDivisibleBy(7, 0) == false);
    CHECK(isDivisibleBy(-18, 9) == true);
}

TEST_CASE("isPrime(integer)") {
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

TEST_CASE("nextPrime(integer)") {
    //base cases
    CHECK(nextPrime(-1) == 2);
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(1) == 2);
    CHECK(nextPrime(2) == 3);
    //small numbers
    CHECK(nextPrime(7) == 11); //input is a prime number
    CHECK(nextPrime(8) == 11); //input is not a prime number
    //big numbers
    CHECK(nextPrime(16435891) == 16435919); //input is a prime number
    CHECK(nextPrime(16435894) == 16435919); //input is not a prime number
}

TEST_CASE("countPrimes(lower limit, upper limit)") {
    //zero primes
    CHECK(countPrimes(-3, 1) == 0);
    CHECK(countPrimes(62, 66) == 0);
    CHECK(countPrimes(16434218, 16434240) == 0);
    CHECK(countPrimes(8, 8) == 0);
    CHECK(countPrimes(40, 10) == 0);
    // > 10 primes
    CHECK(countPrimes(7, 7) == 1);
    CHECK(countPrimes(5, 30) == 8); //first number is a prime number
    CHECK(countPrimes(6, 31) == 8); //second number is a prime number
    CHECK(countPrimes(-100000, 28) == 9);
    CHECK(countPrimes(1003433, 1003433) == 8);
    // many primes
    CHECK(countPrimes(0, 11587) == 1394); // testing with low numbers
    CHECK(countPrimes(1003433, 1019801) == 1195); //testing with high numbers
    //TODO?? 0 1019801 doesn't work 
}

TEST_CASE("isTwinPrime(integer)") {
    CHECK(isTwinPrime(10) == false); // not a prime number
    CHECK(isTwinPrime(37) == false); // prime but not a twin prime
    CHECK(isTwinPrime(11) == true); // twin prime
}

