#include <iostream>
using namespace std;
int main(){
  int testcase;
  scanf("%d", &testcase);
  while(testcase != 0){
    unsigned int syllabus = 0;
    scanf("%du", &syllabus);
    unsigned short int week[syllabus];
    for(int i = 0; i < 7; i++)
      scanf("%du", &week[i]);
    testcase--;
  }
  return 0;
}
