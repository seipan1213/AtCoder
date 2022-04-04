#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >>n;
  string w;
  set<string> s;
  rep(i,n){
    cin>>w;
    s.insert(w);
  }
  cout << s.size()<<endl;
}
