// PRINT - Prime Intervals
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number){
  if(number <= 1)  return false;
  if (number == 2) return true;
  if (number%2 == 0) return false;
  for(int i = 3; i <= sqrt(number); i+=2){
    if(number%i == 0)
      return false;
  }
  return true;
}

int main() {
  int testcase;
  scanf("%d\n", &testcase);
  while(testcase != 0){
    int first, last;
    scanf("%d %d\n", &first, &last);
    for(int i = first; i <= last; i++){
      if(isPrime(i))
        printf("%d\n", i);
    }
    testcase--;
  }

	return 0;
}
