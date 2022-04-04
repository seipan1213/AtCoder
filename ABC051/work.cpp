#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < n; i++)

int main()
{
    int q,t,f;
    char w;
    string ws;
    bool b;
    deque<char> s;
    cin >> ws >> q;
    for(auto c:ws)s.push_back(c);
    rep(i, q)
    {
        cin >> t;
        if (t == 2)
        {
            cin >> f >> w;
            if(b) f=3-f;
            if (f == 1)
                s.push_front(w);
            else{
                s.push_back(w);
            }
        }
        else b=!b;
    }
    if(b) reverse(s.begin(),s.end());
    string ans;
    for(auto a:s){
        ans += a;
    }
    cout <<ans << endl;
}
