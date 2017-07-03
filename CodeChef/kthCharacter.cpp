// Kth Character Problem Code: KCHAR
#include <iostream>
using namespace std;

string Operation1(string A){
  int length = A.length() - 1;
  while(length != -1){
    if(A[length] == 'a')
      A[length] = 'c';
    else
      A[length] = 'a';
    length--;
  }
  return A;
}

string Operation2(string A){
  // reverse(A.begin(), A.end());
  int n = A.length();
  // Swap character starting from two
  // corners
  for (int i=0; i<n/2; i++)
     swap(A[i], A[n-i-1]);
  return A;
}

string S(int n){
  if(n == 0)
    return "";
  else
    return S(n-1) + "a" + Operation1(Operation2(S(n-1)));
}

int main(){
  int i;
  scanf("%d", &i);
  string A = S(i);
  while(i != 0){
    // int test;
    // scanf("%d", &test);
    // printf("%s\n", S(test).c_str());
    long long int loc;
    scanf("%lld", &loc);
    printf("%c\n", A[loc - 1]);
    i--;
  }
  return 0;
}
