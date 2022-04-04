#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  ll a,b,c;
  cin >> a>> b>>c;
  ll d= c-b-a;
  if(d>0&&d*d>4*a*b){
    cout << "Yes"<<endl;
  }else{
    cout << "No"<<endl;
  }
}