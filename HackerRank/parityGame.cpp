// Parity Game
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumArray(vector<int> A){
  int size = A.size();
  int sum = 0;
  for(int i = 0; i < size; i++){
    sum += A[i];
  }

  return sum;
}

int smallestSizeSubsequence(int n, vector <int> A) {
    int size = A.size();

    if(size == 1){
      if(A[size - 1]%2 == 0){
        return 0;
      }
      else{
        return -1;
      }
    }

    int sum = sumArray(A);
    sort(A.begin(), A.end());

    if(sum%2 == 0){
      return 0;
    }
    else{
      for(int i = 0; i < size; i++){
        int iseven = sum - A[i];
        if(iseven%2 == 0){
          return A[i];
        }
      }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for(int A_i = 0; A_i < n; A_i++){
       cin >> A[A_i];
    }
    int result = smallestSizeSubsequence(n, A);
    cout << result << endl;
    return 0;
}
