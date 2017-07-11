// https://www.codechef.com/JULY17/problems/CALC
#include<iostream>
using namespace std;

long long int maxOutput(int m, int n){
  long long int max = 0;
  m--;
  while(m > 0){

  }
}

int main(){
  int T;
  cin >> T;
  while (T--) {
    long long int totalEnergy;
    long long int secondEnergy;
    cin >> totalEnergy >> secondEnergy;
    cout << maxOutput(totalEnergy, secondEnergy);
  }
  return 0;
}

// Test Cases
/**
8 5{
  0 0 8
  1 0 7
  2 0 6
  3 0 5
  3 3 0
},
6 1{
  0 0 6
  1 0 5
  2 0 4
  3 0 3
  3 3 2
  3 6 1
  3 9 0
},
10 2{
  0 0  10
  1 0  9
  2 0  8
  3 0  7
  4 0  6
  4 4  4
  4 8  2
  4 12 0
}



**/
