// Day 3: Intro to Conditional Statements
#include <iostream>
using namespace std;
int main(){
  int number;
  scanf("%d", &number);
  if( number%2 != 0)
    printf("Weird\n");
  else{
    if(number >= 2 && number <=5)
      printf("Not Weird\n");
    else if( number >=6 && number <= 20)
      printf("Weird\n");
    else
      printf("Not Weird\n");
  }
  return 0;
}
