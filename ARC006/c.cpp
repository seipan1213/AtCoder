#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n,w;
  cin >> n;
  vector<int> a(n),b;
  rep(i,n){
    cin >> a[i];
  }
  b.push_back(a[0]);
  for(int i=1;i<n;i++){
    bool bl=true;
    rep(j,b.size()){
      if(b[j]>=a[i]){
        b[j]=a[i];
        bl=false;
        break;
      }
    }
    if(bl){
      b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
  }
  cout << b.size() << endl;
}
