#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;
int dy[]={1,0,-1,0};
int dx[]={0,1,0,-1};
const ll INF=1e18;

int main() {
  int na,nb,ca=0,cb=0;
  ll ans=0;
  bool ok=true;
  cin >>na>>nb;
  vector<int> a(na),b(nb),da(na),db(nb);
  rep(i,na) cin >>a[i];
  rep(i,nb) cin >>b[i];
  rep(i,na-1) da[i]= a[i]-a[i+1];
  da[na-1]=a[na-1];
  da[na]=-10000;
  rep(i,nb-1) db[i]= b[i]-b[i+1];
  db[nb-1]=b[nb-1];
  db[nb]=-10000;
  rep(i,na+nb){
    if(da[ca]>=db[cb]){
      if(ok){
        ans+=a[ca];
        ok=false;
      }else{
        ok=true;
      }
      ca++;
    }else{
      if(ok){
        ans+=b[cb];
        ok=false;
      }else{
        ok=true;
      }
      cb++;
    }
  }
  cout <<ans<<endl;
} 
