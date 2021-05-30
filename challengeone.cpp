#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define LD long double

const int N = 100010;

int inf = 1e9;
int mod = 1e9 + 7;

signed main()
{
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        cout << "Case #" << t << ": ";
        string s;
        cin >> s;
        int n = (int)s.length();
        int a[n];
        memset(a, 0, sizeof(a));

        for (int i = 0; i < n; i++)
            a[i] = s[i] - '0';

        int o[n], c[n];
        memset(o, 0, sizeof(o));
        memset(c, 0, sizeof(c));

        for (int i = 0; i < n; i++)
        {
            int maxi = 10, idx = -1;
            for (int j = 0; j < n; j++)
            {
                if (maxi >= a[j] && a[j])
                {
                    maxi = a[j];
                    idx = j;
                }
            }
            if (maxi == 10)
                break;
            int l = idx, r = idx;
            while (l >= 0 && a[l] >= a[idx])
                l--;
            while (r < n && a[r] >= a[idx])
                r++;
            o[l + 1] += maxi;
            c[r - 1] += maxi;
            for (int j = l + 1; j <= r - 1; j++)
                a[j] -= maxi;
        }

        string ans = "";
        for (int i = 0; i < n; i++)
        {
            while (o[i]--)
                ans += "(";
            ans += s[i];
            while (c[i]--)
                ans += ")";
        }

        cout << ans << "\n";
    }

    return 0;
}