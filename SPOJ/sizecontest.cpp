#include <iostream>
using namespace std;
int main(){
  int testcase = 0, total = 0;
  scanf("%d", &testcase);
  while(testcase != 0){
    int input;
    scanf("%d", &input);
    if(input > 0)
      total += input;
    testcase--;
  }
  printf("%d\n", total);
  return 0;
}
