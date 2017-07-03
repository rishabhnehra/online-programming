// Two Numbers Problem Code: TWONMS
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int testcase;
  long alice, bob, c, d, ans;
  cin >> testcase;
  for(int i = 0; i < testcase; i++){
    cin >> alice;
    cin >> bob;
    cin >> turns;
    while(turns != 0){
      if(n % 2 == 0){
        c = max(alice, bob);
        d = min(alice, bob);
      }
      else{
        alice = alice * 2;
        c = max(alice, bob);
        d = min(alice, bob);
      }
      turns--;
    }
    cout << c/d << endl;
  }
  return 0;
}
