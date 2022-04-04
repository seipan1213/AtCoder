#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(){
  int n,ans=0;
  const int v[6]={1,5,10,50,100,500};
  cin >>n;
  n=1000-n;
  for(int i=5;i>=0;i--){
    ans+=n/v[i];
    n%=v[i];
  }
  cout << ans <<endl;
}
