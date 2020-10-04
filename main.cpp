#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "35 is divisible by 7: ";
  if (isDivisibleBy(35, 7)) {
    std::cout << "true.\n";
  } else {
    std::cout << "false.\n";
  }

  std::cout << "29 is a prime number: ";
  if (isPrime(29)) {
    std::cout << "true.\n";
  } else {
    std::cout << "false.\n";
  }

  std::cout << "The next prime number after 13 is " << nextPrime(13) << ".\n";
  
  std::cout << "The previous prime number before 13 is " << prevPrime(13) << ".\n";

  std::cout << "There are " << countPrimes(0, 100) << " prime numbers between 0 and 100.\n";

  std::cout << "17 is a twin prime: ";
  if (isTwinPrime(17)) {
    std::cout << "true.\n";
  } else {
    std::cout << "false.\n";
  }

  std::cout << "The next twin prime after 43 is " << nextTwinPrime(43) << ".\n";

  std::cout << "The largest twin prime between 0 and 100 is " << largestTwinPrime(0, 100) << ".\n";

  return 0;
}
 