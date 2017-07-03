// PRIME1 - Prime Generator
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long int number){
  if(number <= 1)  return false;
  if (number == 2) return true;
  if (number%2 == 0) return false;
  for(long long int i = 3; i <= sqrt(number); i+=2){
    if(number%i == 0)
      return false;
  }
  return true;
}

int main() {
  int testcase;
  cin >> testcase;
  while(testcase != 0){
    long long int first, last;
    cin >> first;
    cin >> last;
    for(long long int i = first; i <= last; i++){
      if(isPrime(i))
        cout << i << endl;
    }
    testcase--;
  }

	return 0;
}
