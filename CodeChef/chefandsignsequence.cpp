// https://www.codechef.com/JULY17/problems/CHEFSIGN
#include <iostream>
using namespace std;

void printStack(char a[], int TOS){
  for(int i = 0; i <= TOS; i++)
    printf("%c ", a[i]);
  printf("\n");
}

int posibility(string s){
  int length = s.length();
  int less = 0;
  int greater = 0;
  int equal = 0;
  for(int i = 0; i < length; i++){
    if(s[i] == '<')
      less++;
    if(s[i] == '>')
      greater++;
    if(s[i] == '=')
      equal++;
  }
  if(less == 0 || greater == 0){
    // printf("Case#1: %d\n", less+greater+1);
    return less+greater+1;

  }
  else if(less == greater){
    // printf("Case#2: %d\n", less+1);
    return less+1;

  }
  // 1<2<3<4>3>2>1
  //
  //
  else{
    printf("Case#3:\n");
    char stack[length];
    int TOS = -1;
    int max = 0;
    int min = -1;
    cout << "Length: " << length << endl;
    for(int i = 0; i < length; i++){

      if(s[i] == '<'){
        cout << "Detected <" << endl;
        if(s[TOS] == '>'){
          cout << s[TOS] << " - " << '<' << endl;
          TOS = TOS - 1;
          cout << "TOS:" << TOS << endl;
          cout << endl;
          if(min > TOS){
            min = TOS;
            cout << "min--:" << min << endl;
            cout << endl;
          }
          continue;
        }
        s[++TOS] = s[i];
        if(max < TOS){ max = TOS; }
      }

      if(s[i] == '>'){
        cout << "Detected >" << endl;
        if(s[TOS] == '<'){
          cout << s[TOS] << " - " << '>' << endl;
          TOS = TOS - 1;
          cout << "TOS:" << TOS << endl;
          cout << endl;
          if(min > TOS){
            min = TOS;
            cout << "min--:" << min << endl;
            cout << endl;
          }
          continue;
        }
        s[++TOS] = s[i];
        if(max < TOS){ max = TOS; }
      }

    }

    cout << "Max: " << max << endl;
    cout << "Min: " << min << endl;
    cout << "abs(Min): " << abs(min) << endl;

    return 0;
  }

  // Case#3: 1<2<3<4<5<6<7>6>5<6 : <=6 >=2 ans=7
  // 1<2>1<2 : <=2, >=1, ans 2
  //  0 -1 0
  // 3 > 2 > 1 < 2 < 3
    // 1   2   1   0

// < < <
// -1 -2 -3
// 1 < 2 > 1 < 2
// -1 0  -1
// 1 < 2 = 2 > 1
//   -1      0

// < = <


  // 1 < 2 > 1 < 2 > 1 <2 > 1< 2 > 1< 2 < 3 < 4 < 5 > 4 < 5 > 4 < 5 > 4 > 3 >2: < = 10,> = 9, ans = 5
    // 0   -1  0   -1  0  -1 0   -1 0   1   2   3   2   3   2   3   2   1   0
    // -1  0  -1   0   -1  0 -1  0  -1  -2  -3  -4  -3  -2  -1  -2  -1  -2  -3
  // 1 < 2 < 3 < 4 < 5 < 6 < 7 < 8 < 9 < 10 < 11 > 10 > 9 >8 >7 >6 >5 >4 >3 >2: < = 10, > = 9 ans 11
  //   0   1   2   3   4   5   6   7   8    9    8    7   6  5  4  3  2  1  0
  //   -1  -2  -3  -4  -5  -6  -7  -8  -9  -10   -9  -8  -7  -6 -5 -4-3  -2 -1
  // 1 < 2 < 3 < 4 < 5 < 6 < 7 < 8 > 7: < = 7, > = 1, ans = 8
  //   0   1   2   3   4   5   6   5
  //   -1  -2  -3  -4  -5  -6  -7 -6
  //  2 < 3 < 4 < 5 > 4 > 3 > 2 > 1: < = 3, > = 4, ans = 5
  //    0   1   2   1   0   -1  -2
  //    -1  -2  -3  -2  -1  0   1
  // 3 > 2 > 1 < 2 < 3 < 4: , ans : 4
  //   0   1   0   -1  -2
  //   1   2   1   0   -1
  // 4 > 3 > 2 > 1 < 2 < 3 < 4 < 5 : ans:5
  //   0   1   2   1   0   -1  -2
  //   1   2   3   2   1   0   -1
  // 1< 2 >1  < 2 > 1 < 2 > 1 < 2 < 3 < 4 > 3 > 2 > 1 > 0 < 1 > 0 < 1 > 0 < 1 > 0: ans: 5
  //  0  -1   0  -1   0   -1  0   1   2   1   0   -1  -2  -1  -2  -1  -2  -1  -2
  //  -1  0   -1  0   -1  0   -1  -2  -3  -2  -1  0   1   0   1   0   1   0   1

  // 4 < 5 < 6 > 5 > 4 > 3 > 2 > 1: ans: 6
  //   -1  -2  1   2   3   4    5
}

int main(){
  int T;
  scanf("%d", &T);
  while(T--){
    string s;
    cin >> s;
    printf("%d\n", posibility(s));
  }
  return 0;
}
