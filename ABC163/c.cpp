#include <bits/stdc++.h>
#define rep(i,n) for (int i = 1; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin >>n;
  vector<int> a(n,0);
  int b;
  rep(i,n){
    cin >>b;
    a[b-1]++;
  }
  for(auto au:a){
    cout <<au<<endl;
  }
}
