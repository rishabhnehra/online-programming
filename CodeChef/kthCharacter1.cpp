#include<iostream>

#define ll long long
using namespace std;
int main()
{
  ll t;
  cin>>t;
  while(t--)
  {
    ll k,c;
    cin>>k;
    ll a=(abs(k-3))%4;
    cout << "a: " << a << " ";
    while(k%2==0)
    {
        k=k/2;
        cout << "k: " << k << " ";
    }
    c=(abs(k-3))%4;
    cout << "c: " << c << " " << endl;
    if(a==0||c==0)
        cout<<"c"<<endl;
    else
        cout<<"a"<<endl;
  }
}
