// Day 2: Operators
#include <iostream>
#include <cmath>
using namespace std;
int main() {
  float mealCost, tipPercent, taxPercent;
  scanf("%f %f %f", &mealCost, &tipPercent, &taxPercent);
  int totalCost = round(mealCost + mealCost*(tipPercent/100) + mealCost*(taxPercent/100));
  printf("The total meal cost is %d dollars.\n", totalCost);
  return 0;
}
