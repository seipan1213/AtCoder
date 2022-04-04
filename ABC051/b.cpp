#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    ll a,b;
    double am,bm;
    int mi =10000000;
    cin >> a >> b;
    am = (a + 1) / 0.08;
    a = floor(a / 0.08);
    bm = (b + 1) / 0.1;
    b = floor(b / 0.1);
    for (int i = a; i < am; i++)
    {
        for (int j = b; j < bm; j++)
        {
            if (i == j)
            {
                mi=min(mi,i);
            }
        }
    }
    if(mi!=10000000)cout << mi << endl;
    else cout << -1 << endl;
}
