// FCTRL - Factorial
#include <iostream>
#include <cmath>
using namespace std;

unsigned int trailingZeros(unsigned int number){
  unsigned int trailingZeros = 0;
  // Used Floor Function to calculate Trailig Zeros.
  for(int i = 1; pow(5,i) <= number; i++)
    trailingZeros = trailingZeros + (number/pow(5,i));
  return trailingZeros;
}

int main(){
  unsigned int testcase;
  scanf("%d", &testcase);
  while (testcase != 0) {
    unsigned int number;
    scanf("%d", &number);;
    printf("%d\n", trailingZeros(number));
    testcase--;
  }
  return 0;
}
