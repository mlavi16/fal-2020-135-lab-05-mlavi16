#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("isDivisibleBy(numerator, denominator)") {
    CHECK(isDivisibleBy(100, 25) == true);
    CHECK(isDivisibleBy(35, 6) == false);
    CHECK(isDivisibleBy(5, 15) == false);
    CHECK(isDivisibleBy(8, 8) == true);
    CHECK(isDivisibleBy(7, 0) == false);
    CHECK(isDivisibleBy(-18, 9) == true);
    CHECK(isDivisibleBy(24.9, 6.2) == true); //truncates decimal inputs
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
    CHECK(nextPrime(-43) == 2);
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
    // < 10 primes
    CHECK(countPrimes(7, 7) == 1);
    CHECK(countPrimes(7, 11) == 2);
    CHECK(countPrimes(5, 30) == 8); //first number is a prime number
    CHECK(countPrimes(6, 31) == 8); //second number is a prime number
    CHECK(countPrimes(-100000, 28) == 9);
    CHECK(countPrimes(1003433, 1003589) == 8);
    // many primes
    CHECK(countPrimes(0, 11587) == 1394); // testing with low numbers
    CHECK(countPrimes(1003433, 1019801) == 1195); //testing with high numbers
    // CHECK(countPrimes(0, 1000000) == 78498); // works but takes about a minute and a half to run
}

TEST_CASE("isTwinPrime(integer)") {
    CHECK(isTwinPrime(-7) == false);
    CHECK(isTwinPrime(-1) == false);
    CHECK(isTwinPrime(0) == false);
    CHECK(isTwinPrime(1) == false);
    CHECK(isTwinPrime(2) == false);

    CHECK(isTwinPrime(3) == true);   // twin prime
    CHECK(isTwinPrime(7) == true);   // twin prime
    CHECK(isTwinPrime(10) == false); // not a prime number
    CHECK(isTwinPrime(11) == true);  // twin prime
    CHECK(isTwinPrime(37) == false); // prime but not a twin prime

    CHECK(isTwinPrime(1003589) == false); // prime but not twin prime
    CHECK(isTwinPrime(1003599) == false); // not prime
    CHECK(isTwinPrime(1003619) == true); // twin prime
}

TEST_CASE("nextTwinPrime(integer)") {
    //base cases
    CHECK(nextTwinPrime(-7) == 3);
    CHECK(nextTwinPrime(0) == 3);
    CHECK(nextTwinPrime(1) == 3);
    CHECK(nextTwinPrime(2) == 3);
    CHECK(nextTwinPrime(3) == 5);
    CHECK(nextTwinPrime(4) == 5);

    CHECK(nextTwinPrime(11) == 13); // twin prime
    CHECK(nextTwinPrime(20) == 29); // not prime
    CHECK(nextTwinPrime(23) == 29); // prime but not twin prime

    CHECK(nextTwinPrime(1000000) == 1000037); // not a prime number
    CHECK(nextTwinPrime(1000003) == 1000037); // prime but not twin prime
    CHECK(nextTwinPrime(1003619) == 1003621); // twin prime

}

// TEST_CASE("largestTwinPrime(lower limit, upper limit)") {

// }