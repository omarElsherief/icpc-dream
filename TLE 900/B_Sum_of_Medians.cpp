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
#define PII pair<ll, ll>
#define all(a) a.begin(), a.end()
#define smurf                    \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL)
#define el '\n'

int main()
{
    smurf;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll x = n - ((n + 1) / 2);
        ll sum = 0;
        V<ll> v(n * k);
        for (size_t i = 0; i < n * k; i++)
        {
            cin >> v[i];
        }
        int z = n * k - 1;
        while (k--)
        {
            z -= x;
            sum += v[z--];
        }
        cout << sum << el;
    }

    return 0;
}