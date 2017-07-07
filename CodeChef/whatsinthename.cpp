// https://www.codechef.com/JULY17/problems/NITIKA
#include <iostream>
#include <vector>
using namespace std;

string firstName(string a){
  a = toupper(a[0]);
  a.append(".");
  return a;
}

string lastName(string a){
  string temp = a;
  temp[0] = toupper(temp[0]);
  for(int i = 1; i < a.length(); i++)
    temp[i] = tolower(temp[i]);
  return temp;
}

string formattedName(vector<string> n){
  string temp;
  int size = n.size();
  for(int i = 0; i < size; i++){
    if(i == size - 1){
      temp += lastName(n[i]);
      continue;
    }
    temp += firstName(n[i]);
    temp.append(" ");
  }
  return temp;
}

vector<string> split(string Name){
  vector<string> n;
  string temp;
  for(int i = 0; i < Name.length(); i++){
    if(Name[i] == ' '){
      n.push_back(temp);
      temp = "";
      continue;
    }
    temp += Name[i];
  }
  n.push_back(temp);
  return n;
}

int main(){
  int T;
  scanf("%d", &T);
  cin.ignore();  //Use this to ignore a \n
  while(T != 0){
    string Name;
    getline(cin, Name);
    vector<string> n = split(Name);
    cout << formattedName(n) << endl;
    T--;
  }
  return 0;
}
