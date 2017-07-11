// https://www.codechef.com/JULY17/problems/CHEFSIGN
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void printVector(vector<char> a){
//   int length = a.size();
//   for(int i = 0; i < length; i++){
//     printf("%c ", a[i]);
//   }
//   printf("\n");
// }

long long int posibility(string s){
  vector<char> a;
  long long int length = 0;
  long long int maximum = 0;
  for(long long int i = 0; i < s.length();i++){
    if( s[i] != '='){
        if(length == 0){
          a.push_back(s[i]);
          length++;
          maximum = max(length, maximum);
        }
        else{
          if(s[i] != a[length-1]){
            a.clear();
            a.push_back(s[i]);
            length = 1;
            maximum = max(length, maximum);
          }
          else{
            a.push_back(s[i]);
            length++;
            maximum = max(length, maximum);
          }
        }
    }
    // printVector(a);
  }
  return maximum+1;
}
int main(){
  long long int T;
  cin >> T;
  while(T--){
    string s;
    cin >> s;
    cout << posibility(s) << endl;
  }
  return 0;
}
