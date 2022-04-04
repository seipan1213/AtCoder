#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

ll mod = 1000000007;

int main() {
  string s,syaku1;
  ll ans=0;
  cin >>s;
  ll l=0,r=3;
  string syaku=s.substr(0,4);
  while(r<s.size()||r-l!=3){
    if(syaku.size()>15){
      syaku1 = to_string(stoll(syaku.substr(0,10))%mod);
    }else{
      syaku1=syaku;
    }
    if (stoll(syaku1)%2019==0){
      ans++;
      l=r;
      r=l+3;
      if(r<s.size()){
        syaku=s.substr(l,4);
      }
      continue;
    }
    if(r==s.size()){
      l++;
      r=l+3;
      syaku=s.substr(l,4);
    }else{
      r++;
      syaku+=s[r];
    }
  }
  cout <<ans<<endl;
}