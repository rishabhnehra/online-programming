#include <iostream>
using namespace std;
int main(){
  int input;
  while(true){
    cin >> input;
    if(input == 42)
      break;
    cout << input << endl;
  }
  return 0;
}
