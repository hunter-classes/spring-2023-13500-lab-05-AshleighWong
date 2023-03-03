#include <iostream>
#include "funcs.h"


//TASK A
bool isDivisibleBy(int n, int d)
{
  if (n % d == 0)
  {
    return true;
  }
  return false;
}



//TASK B
bool isPrime(int n)
{
  if (n < 2) // 0 ,1 and neg
  {
    return false;
  }
  for (int i = 2; i < n; i++)
    {
      if(isDivisibleBy(n, i) == true)
        {
          return false;
        }
    }
  return true;
}



//TASK C
int nextPrime(int n)
{
  int prime = n+1; 
  while(isPrime(prime) == false){ //if n is not prime, loop continues until a prime number is reached
    prime++; //keeps testing the next num
  }
  return prime; 
  
}




//TASK D
int countPrimes(int a, int b)
{
  int numOfPrime = 0;
  for(int i = a; i <= b; i++)
    { 
      if(isPrime(i) ==  true) //caling other func
        { 
         numOfPrime++;
        }
    }
  return numOfPrime;
}



//TASK E
bool isTwinPrime(int n)
{
    if(isPrime(n) && (isPrime(n-2) || isPrime(n+2))) //refers back to isPrime(). so n will loop
    { 
      return true;
    }
  return false;
}



//TASK F
int nextTwinPrime(int n)
{
  int nextPrimeTwin = n+1;
  while(isTwinPrime(nextPrimeTwin) == false)
  {
    nextPrimeTwin++;
  }
  return nextPrimeTwin;
}



//TASK G
int largestTwinPrime(int a, int b)
{
  int bigTwinPrime;
  for(int i = a; i <= b; i++) //will test within range of a and b
  {
    if(isTwinPrime(i))
    { 
      bigTwinPrime = i; //will keep changing if it works
    }
    else
    {
      bigTwinPrime = -1; //no twin primes
    }
  }
  return bigTwinPrime;
}
