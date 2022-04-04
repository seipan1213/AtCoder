#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int n, wx, wy;
    double  mi = 0;
    cin >> n;
    vector<P> point(n);
    rep(i, n)
    {
        cin >> wx >> wy;
        point[i] = make_pair(wx, wy);
    }
    rep(i, n)
    {
        for (int j = i + 1; j < n; j++)
        {
            double a = sqrt(pow(point[i].first - point[j].first, 2) + pow(point[i].second - point[j].second, 2));  
            mi = max(mi, a);
        }
    }
    cout << mi <<endl;
}
