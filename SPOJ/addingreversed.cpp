// ADDREV - Adding Reversed Numbers
#include <iostream>
using namespace std;

int reverseIt(int number){
  int reversed = 0;
  // Reverse logic
  while(number != 0){
    int remainder = 0;
    remainder = number%10;
    reversed = reversed*10 + remainder;
    number = number / 10;
  }
  return reversed;
}

int main(int argc, char const *argv[]) {
  int testcase;
  cin >> testcase;
  while(testcase != 0){
    int first, second;
    cin >> first;
    cin >> second;
    first = reverseIt(first);
    second = reverseIt(second);
    cout << reverseIt(first + second) << endl;
    testcase--;
  }
  return 0;
}
