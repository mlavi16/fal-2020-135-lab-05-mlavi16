#include <iostream>
#include "funcs.h"

bool isDivisibleBy(int n, int d) {
    /*
    Determines if n is divisible by d.
    @param n numerator
    @param d denomenator
    @return bool if n is divisible by d
    */
    if (d == 0) {
        return false;
    }
    if ((n % d) == 0) {
        return true;
    } else {
        return false;
    }
}

bool isPrime(int n) {
    /*
    Determines if n is a prime number.
    @param n an integer
    @return bool if n is prime
    */
    if (n < 2) {
        return false;
    }
    for (int i = 2; i < (n/2 + 1); i++) {
        if (isDivisibleBy(n, i)) {
            return false;
        }
    }
    return true;
}

int nextPrime(int n) {
    /*
    Finds the smallest prime greater than n.
    @param n an integer
    @return next_prime smallest prime greater than n
    */

   int next_prime = (n + 1);

    while (!isPrime(next_prime)) {
        next_prime++;
    }
    return next_prime;

}

int countPrimes(int a, int b) {
    /*
    Finds the number of prime numbers in the interval a ≤ x ≤ b.
    @param a lower limit of interval to find primes
    @param b upper limit of interval to find primes
    @return num_primes the number of primes in interval [a,b]
    */

    int num_primes = 0;
    for (int i = (a); i <= b; i++) {
        if (isPrime(i)) {
            num_primes++;
        }
    }
    return num_primes;
}

bool isTwinPrime(int n) {
    /*
    Checks if n is a twin prime.
    (A prime number N is called a twin prime if 
    either N-2 or N+2 (or both of them) is also a prime.)

    @param n an integer
    @return bool if n is a twin prime
    */
    if (isPrime(n)) {
        if (isPrime(n+2) || isPrime(n-2)) {
            return true;
        }
    }
    return false;
}

int nextTwinPrime(int n) {
    /*
    Finds the smallest twin prime greater than n.
    @param n integer
    @return twin_prime smallest twin prime greater than n.
    */
    int twin_prime = n;
    do {
        twin_prime = nextPrime(twin_prime);
    } while (!isTwinPrime(twin_prime));
    return twin_prime;
}

int prevPrime(int a) {
    while (a >= 2) {
        if (isPrime(a-1)) {
            return (a-1);
        }
        a--;
    }
    return -1;
}

int largestTwinPrime(int a, int b) {
    /*
    Returns the largest twin prime in the range a ≤ N ≤ b.
    If there is no twin primes in range, it returns -1.
    @param a lower integer limit of interval to find twin primes
    @param b upper integer limit of interval to find twin primes
    @return largest_twin the largest twin prime in interval [a,b]
    */
    for (int i = b; i >= a; i = prevPrime(i)) {
        if (isTwinPrime(i)) {
            return i;
        }
    }
    return -1;
}
