#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < n; ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  string s;
  ll n;
  cin >> n;
  while (n--) {
    cout <<n<<endl;
    s = (char)('a' + (int)(n % 26)) + s;
    cout << n % 26<<endl;
    n /= 26;
  }
  cout << s;
}