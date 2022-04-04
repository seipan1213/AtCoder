#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

int main() {
  int n,k,a;
  string s,t,ans;
  cin >> n>> k>>s;
  t=s;ans=s;
  if(n-1<k) {
    sort(s.begin(),s.end());
    cout <<s <<endl;
    return 0;
  }
  rep(i,n){
    a=i;
    for(int j=i+1;j<n;j++){
      if(s[a]>s[j]){
        t=s;
        swap(t[i],t[j]);
        int count=0;
        rep(l,n){
          if(ans[l] != t[l]){
             count++;
          }
        }
        if(count<=k){
          a=j;
        }
      }
    }
    swap(s[i],s[a]);
  }
  cout <<s<<endl;
}