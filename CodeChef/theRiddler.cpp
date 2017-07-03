// The Riddler Problem Code: RIDDLE99
#include <iostream>
using namespace std;


unsigned int countDivisible(unsigned int A, unsigned int B, unsigned int M){
  // while(A <= B){
  //   if(A%M == 0)
  //     count++;
  //   A++;
  // }


  //Solution #1
  // unsigned int firstTerm, lastTerm, answer;
  // firstTerm = A+(M-(A%M)); // <-- This is important
  // lastTerm = B-(B%M);
  //
  // if(A%M == 0 )
  //   firstTerm = A;
  // else if(firstTerm > B)
  //   return 0;
  //
  // if(B%M == 0)
  //   lastTerm = B;
  // else
  //   lastTerm = B-(B%M);
  //
  // answer = (((lastTerm - firstTerm)/M) + 1);

  // Solution #2
  unsigned int firstTerm, lastTerm;
  if(A%M == 0)
    firstTerm = A/M - 1;
  else
    firstTerm = A/M;
  lastTerm = B/M;
  return lastTerm - firstTerm;
}


int main(){
  int testcase;
  scanf("%d", &testcase);
  while(testcase != 0){
    unsigned int A, B, M;
    scanf("%d %d %d", &A, &B, &M);
    printf("%d\n", countDivisible(A, B, M));
    testcase--;
  }
  return 0;
}
