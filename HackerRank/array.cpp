// https://www.hackerrank.com/challenges/30-arrays
#include <iostream>
using namespace std;
int main(){
  int sizeOfArray;
  scanf("%d", &sizeOfArray);
  int array[sizeOfArray];
  for(int i = 0; i < sizeOfArray; i++)
    scanf("%d", &array[i]);
  for(int i = sizeOfArray - 1; i >= 0; i--)
    printf("%d ", array[i]);
  printf("\n");
  return 0;
}
