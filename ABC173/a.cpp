#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  int n;
  cin>>n;
  n%=1000;
  if(n!=0){
    cout <<1000-n<<endl;
  }else{
    cout <<0<<endl;
  }
  
}