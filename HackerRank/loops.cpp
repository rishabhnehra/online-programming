// Day 5: Loops
#include <iostream>
using namespace std;
int main(){
  unsigned int number;
  scanf("%d", &number);
  for(int i = 1; i <= 10; i++)
    printf("%d x %d = %d\n", number, i, number*i);
  return 0;
}
