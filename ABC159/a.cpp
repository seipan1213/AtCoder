#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 1; i <= n; i++)
int a[200005],s[200005];
int n;
ll ans=0;
int main()
{
  cin >> n;
  rep(i,n){
    cin >> a[i];
    ans+=s[a[i]];
    s[a[i]]++;
  }
  rep(i,n){
    cout << ans-s[a[i]]+1<<endl;
  }
}