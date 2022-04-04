#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int n;
ll ans = 0,r = 0, g = 0, b = 0;;
string s;

int main()
{

  cin >> n >> s;
  
  for (char c : s){
    if (c == 'R') r++;
    if (c == 'G') g++;
    if (c == 'B') b++;
  }
  ans = r * g * b;
  rep(i, n){
    for (int j = 1; i+j+j < n; j++){
      if ((s[i] * s[i + j] * s[i + j + j]) == ('R' * 'G' * 'B')){
        ans--;
      }
    }
  }
  cout << ans << endl;
}
