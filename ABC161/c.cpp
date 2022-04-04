#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(){
  ll n,k;
  cin >> n>>k;
  n%=k;
  n=min(n,abs(n-k));
  cout <<n<<endl;
}