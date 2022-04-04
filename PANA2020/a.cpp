#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
  ll h, w,a;
  cin >> h >> w;
  if(w==1||h==1) a=1;
  else if(w%2==0) a=  w*h/2;
  else w--,a= w*h/2+h/2+h%2;
  cout <<a <<endl;
}