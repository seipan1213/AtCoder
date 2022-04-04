#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

void Lis(vector<int> a){
  vector<int> dp(a.size(),1001001001);
  rep(i,a.size()){
    *lower_bound(dp.begin(),dp.end(),a[i])=a[i];
  }
  cout << lower_bound(dp.begin(),dp.end(),1001001001)-dp.begin()<<endl;
}

int main() {

}