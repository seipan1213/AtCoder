#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int,int>;


long double PI=3.141592653589793;

int main() {
  long double ans,a,b,h,m;
  
  cin >>a>>b>>h>>m;
  h=h*(1.0/12.0)*360.0+(m*0.5);
  m=m*(1.0/60.0)*360.0;

  long double rad=abs(h-m);
  if(rad>180) rad=180-(rad-180);
  if(rad==180){
    cout <<a+b<<endl;
  }else if(rad==90){
    ans=a*a+b*b;
    ans=pow(ans,0.5);
    cout <<ans<<endl;
  }else{
    rad*=(PI/ 180.0);
    ans=a*a+b*b-(2.0*a*b*cosl(rad));
    cout << fixed << setprecision(20) << pow(ans,0.5)<< endl;
  }
}
