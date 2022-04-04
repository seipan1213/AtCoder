#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  int a[200004];
  int n;
  cin >> n;
  rep(i,n){
    cin>>a[i];
  }
  rep(i,n){
    map<P,int> ma;
    rep(j,n){
      if(j!=i){
        for(int k=j+1;k<n;k++){
          
        }
      }
    }
    int ans =0;
    for(auto p:ma){
      if(p.second >2) ans+=p.second-1;
    }
    cout << ans<<endl;
  }
}
