#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// add your tests here

//Task A
TEST_CASE("Divisible numbers")
{
  CHECK(isDivisibleBy(26,2) == true);  
  CHECK(isDivisibleBy(14,3) == false); 
}


//Task B
TEST_CASE("Prime numbers")
{
  CHECK(isPrime(2) == true);
  CHECK(isPrime(97) == true);
  CHECK(isPrime(8) == false);
  CHECK(isPrime(90) == false);
}


//Task C
TEST_CASE("Next smallest prime numbers")
{
  CHECK(nextPrime(14) == 17);
  CHECK(nextPrime(19) == 23);
}


//Task D
TEST_CASE("Number of primes within range")
{
  CHECK(countPrimes(1,11) == 5);
  CHECK(countPrimes(14,16) == 0);
}


//Task E
TEST_CASE("Twin prime numbers")
{
  CHECK(isTwinPrime(59) == true);
  CHECK(isTwinPrime(31) == false);
}


//Task F
TEST_CASE("Next smallest twin prime numbers")
{
  CHECK(nextTwinPrime(59) == 23);
  CHECK(nextTwinPrime(73) == 101);
  CHECK(nextTwinPrime(29) == 31);
}


//Task G
TEST_CASE("Largest twin prime numbers")
{
  CHECK(largestTwinPrime(1,5) == 5);
  CHECK(largestTwinPrime(1,31) == 31);
  CHECK(largestTwinPrime(14,16) == -1);
}
