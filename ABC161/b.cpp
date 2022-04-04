#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(){
  int n,m,ans=0;
  cin >> n>>m;
  vector<int> a(n);
  rep(i,n){
    cin >>a[i];
    ans+=a[i];
  }
  double b= ans * 1.0/(4.0*m);
  sort(a.begin(),a.end());
  reverse(a.begin(),a.end());
  rep(i,m){
    if(a[i]<b){
      cout << "No" <<endl;
      return 0;
    }
  }
  cout << "Yes" <<endl;
}