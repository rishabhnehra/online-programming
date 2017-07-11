#include<iostream>
using namespace std;

int factorial(int n){
  if(n < 2)
    return 1;
  else
    return n*factorial(n-1);
}

int main(){
  int number;
  scanf("%d", &number);
  printf("%d\n", factorial(number));
  return 0;
}
