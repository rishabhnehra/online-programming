// Harry and magical number Problem Code: HHMGN
#include <iostream>
#include <algorithm>
using namespace std;
unsigned int magicalNumber(int sizeOfArray, int sumOfArray){
  unsigned int current = 0;
  unsigned int A[sizeOfArray];
  for(int i = 0; i < sizeOfArray; i++)
    scanf("%d", &A[i]);
  sort(A, A+sizeOfArray);
  for(int i = 0; i < sizeOfArray; i++){
    unsigned int greaterThanCurrent = 0;
    current += A[i];
    greaterThanCurrent = A[i]*((sizeOfArray - 1) - i);
    if((current + greaterThanCurrent) == sumOfArray)
      return A[i];
  }
  return -1;
}
int main(){
  int T;
  scanf("%d", &T);
  while(T != 0){
    unsigned int N, S;
    scanf("%d %d", &N, &S);
    printf("%d\n", magicalNumber(N, S));
    T--;
  }
  return 0;
}
