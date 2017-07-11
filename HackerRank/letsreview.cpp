// https://www.hackerrank.com/challenges/30-review-loop
#include <iostream>
using namespace std;

string generatedString(string s){
  int length = s.length();
  string temp;
  for(int even = 0; even < length; even = even + 2)
    temp += s[even];
  temp.append(" ");
  for(int odd = 1; odd < length; odd = odd + 2)
    temp += s[odd];
  return temp;
}

int main() {
  int T;
  scanf("%d", &T);
  while(T--){
    string s;
    cin >> s;
    printf("%s\n", generatedString(s).c_str());
  }
  return 0;
}
