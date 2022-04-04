#include<bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  ll ans=0;
  string s;
  cin >> n >> s;
  rep(i,s.size()-2){
    if(s[i]=='R'){
      for(int j=i+1;j<s.size()-1;j++){
        if(s[j]=='G'){
          for(int k=j+1;k<s.size();k++){
            if(s[k]=='B'&&!(j-i==k-j)){
              ans++;
            }
          }
        }else if(s[j]=='B'){
          for(int k=j+1;k<s.size();k++){
            if(s[k]=='G'&&!(j-i==k-j)){
              ans++;
            }
          }
        }
      }
    }
  }
  cout << ans <<endl;
}
