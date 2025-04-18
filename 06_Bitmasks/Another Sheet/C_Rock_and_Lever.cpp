#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define MOD 1000000007
#define L list
#define V vector
#define D deque
#define ST set
#define MS multiset
#define M map
#define UM unordered_map
#define pb push_back
#define pf push_front
#define MM multimap
#define f first
#define s second
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define all(a) a.begin(), a.end()
#define smurf                    \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
#define el '\n'

int main()
{
    smurf;

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        V<ll> v(n);
        V<ll> cnt(50);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            ll MSB = 63 - __builtin_clzll(v[i]);
            cnt[MSB]++;
        }
        ll ans = 0;
        for (int i = 0; i < 50; i++)
        {
            ans += (cnt[i] * (cnt[i] - 1)) / 2;
        }
        cout << ans << el;
    }
    return 0;
}