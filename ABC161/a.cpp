#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main(){
  int x,y,z;
  cin >>x>>y>>z;
  swap(x,y);
  swap(x,z);
  cout << x<<" "<<y<<" "<<z;
}