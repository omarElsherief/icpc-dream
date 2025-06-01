#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define el '\n'
#define smurf                    \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)

int main()
{
    smurf;
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<ll> a(n + 1);
        vector<ll> prefix(n + 1, 0);

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }

        ll total = prefix[n];

        while (q--)
        {
            int l, r;
            ll k;
            cin >> l >> r >> k;
            ll sum_lr = prefix[r] - prefix[l - 1];
            ll new_total = total - sum_lr + (r - l + 1) * k;
            cout << (new_total % 2 ? "YES" : "NO") << el;
        }
    }
    return 0;
}
