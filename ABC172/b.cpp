#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string s,t;
  int count=0;
  cin>>s>>t;
  rep(i,s.size()){
    if(s[i]!=t[i]){
      count++;
    }
  }
  cout<<count<<endl;
}