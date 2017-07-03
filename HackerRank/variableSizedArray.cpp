#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned int n, q;
    scanf("%d %d", &n, &q);
    vector<vector<int> > index;
    while(n != 0){
      unsigned int k;
      vector<int> a;
      scanf("%d", &k);
      for(int i = 0; i < k; i++){
        int number;
        scanf("%d", &number);
        a.push_back(number);
      }
      index.push_back(a);
      n--;
    }
    while(q != 0){
      unsigned int i, j;
      scanf("%d %d", &i, &j);
      printf("%d\n", index[i][j]);
      q--;
    }
    return 0;
}
