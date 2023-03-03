#include <iostream>
#include "funcs.h"

int main()
{

  //Task A
  std::cout << "The divisibility of 26 and 2 is: " << isDivisibleBy(26,2) << "\n";
  std::cout << "The divisibility of 14 and 3 is: " << isDivisibleBy(14,3) << "\n";
  
  std::cout << "\n------------------\n";
  
  //Task B
  std::cout << "2 is: " << isPrime(2) << "\n";
  std::cout << "97 is: " << isPrime(97) << "\n";
  std::cout << "8 is: " << isPrime(8) << "\n";
  std::cout << "90 is: " << isPrime(90) << "\n";

  std::cout << "\n------------------\n";

  //Task C
  std::cout << "The next prime number after 7 is: " << nextPrime(14) << "\n";
  std::cout << "The next prime number after 19 is: " << nextPrime(19) << "\n";

  std::cout << "\n------------------\n";
  
  //Task D
  std::cout << "The number of prime numbers between 1 and 11 is: " << countPrimes(1,11) << "\n";
  std::cout << "The number of prime numbers between 14 and 16 is: " << countPrimes(14,16) << "\n";

  std::cout << "\n------------------\n";

  //Task E
  std::cout << "59 is: " << isTwinPrime(59) << "\n";
  std::cout << "31 is: " << isTwinPrime(31) << "\n";

  std::cout << "\n------------------\n";

  //Task F
  std::cout << "The next prime twin number after 59 is: " << nextTwinPrime(59) << "\n";
  std::cout << "The next prime twin number after 73 is: " << nextTwinPrime(73) << "\n";
  std::cout << "The next prime twin number after 83 is: " << nextTwinPrime(83) << "\n";

  std::cout << "\n------------------\n";

  //Task G
  std::cout << "The largest twin prime between 1 and 5 is: " << largestTwinPrime(2,13) << "\n";
  std::cout << "The largest twin prime between 1 and 31 is: " << largestTwinPrime(13,31) << "\n";
  std::cout << "The largest twin prime between 14 and 16 is: " << largestTwinPrime(31,47) << "\n";
  

  return 0;
}
