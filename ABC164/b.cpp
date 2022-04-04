#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;

int main() {
  double a,b,c,d;
  cin >>a >>b>>c>>d;
  a=ceil(a/d);
  c=ceil(c/b);
  if(a>=c){
    cout <<"Yes"<<endl;
  }else{
    cout <<"No"<<endl;
  }
}
