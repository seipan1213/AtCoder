#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  ll x,a=100;
  ll count=0;
  cin >>x;
  while(x>a){
    a*=1.01;
    count++;
  }
  cout << count<<endl;
}
