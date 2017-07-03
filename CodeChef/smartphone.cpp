// Smart Phone | Problem Code: ZCO14003
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// Working Solution #1
long long int getMaxRevenue(vector<long long int> v){
  sort(v.rbegin(), v.rend());
  long long int max = 0;
  for(long i = 0; i < v.size(); i++){
    if(v[i]*(i+1) >= max)
      max = v[i]*(i+1);
  }
  return max;
}

int main(){
  int customers;
  cin >> customers;
  vector<long long int> budgets;
  while(customers != 0){
    long long int input;
    cin >> input;
    budgets.push_back(input);
    customers--;
  }
  cout << getMaxRevenue(budgets) << endl;
  return 0;
}


// Working Solution #2
// int main(){
//   int customers;
//   cin >> customers;
//
//   long long int budgets[customers];
//   for(int i = 0; i < customers; i++) cin >> budgets[i];
//
//   sort(budgets, budgets + customers);
//
//   long long int max = 0;
//
//
//   for(int i = 0; i < customers; i++)
//     if(max < budgets[i]*(customers-i))
//       max = budgets[i]*(customers-i);
//
//   cout << max << endl;
//
//   return 0;
// }
