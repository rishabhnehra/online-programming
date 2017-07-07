// PRIME1 - Prime Generator
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void generatePrimes(long long int first, long long int last){
  bool primes[last+1];
  for(long long int i = 0; i <= last; i++)
    primes[i] = true;


    //Sieve of Eratosthenes logic is applied
  if(first < 2){
    primes[0] = false;
    primes[1] = false;
  }

  int m = sqrt(last);

  for(long long int i = 2; i <= m; i++){
    if(primes[i] == true)
      for(long long int j = i*i; j <= last; j+=i)
        primes[j] = false;
  }

  //Prints the prime number
  // for(long long int i = first; i <= last; i++)
  //   if(primes[i] == true)
  //     printf("%lld\n", i);
  // if(number <= 1)  return false;
  // if (number == 2) return true;
  // if (number%2 == 0) return false;
  // for(int i = 3; i <= sqrt(number); i+=2){
  //   if(number%i == 0)
  //     return false;
  // }
  // return true;

  vector<int> primevector;

  for(int i = first; i <= last; i++)
    if(primes[i] == true)
      primevector.push_back(i);

  for(int i = 0; i < primevector.size(); i++)
    printf("%d\n", primevector[i]);

}


int main() {
  int testcase;
  scanf("%d", &testcase);
  while(testcase != 0){
    long long int first, last;
    scanf("%lld %lld", &first, &last);
    generatePrimes(first, last);
    testcase--;
  }
	return 0;
}
