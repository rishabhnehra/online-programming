// FCTRL2 - Small factorials
#include<iostream>
using namespace std;

unsigned long long int factorial(unsigned int n){
  if(n == 0)
    return 1;
  if(n == 1)
    return 1;
  return n * factorial(n - 1);
}

int main(){
  unsigned int number;
  scanf("%d", &number);
  printf("%lld\n", factorial(number));
  return 0;
}
