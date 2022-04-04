#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    vector<int> a(4);
    int sum = 0;
    string s;
    cin >> s;
    rep(i, 4) a[i] = (int)(s[i] - '0');
    for (int t = 0; t < (1 << 4); t++)
    {
        bitset<4> b(t);
        rep(i, 4)
        {
            if (b.test(i))
            {
                sum += a[i];
            }
            else
            {
                sum -= a[i];
            }
        }
        if (sum == 7)
        {
            rep(i, 4)
            {
                cout << a[i];
                if (i != 3) if(b.test(i+1)){
                    cout << "+";
                }else{
                    cout << "-";
                }
            }
            cout << "=7";
            return 0;
        }
        sum=0;
    }
}
