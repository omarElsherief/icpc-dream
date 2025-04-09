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

vector<ll> prime_factors(ll n)
{
    vector<ll> f;
    for (ll x = 2; x * x <= n; x++)
    {
        while (n % x == 0)
        {
            f.push_back(x);
            n /= x;
        }
    }
    if (n > 1)
        f.push_back(n);
    return f;
}
int main()
{
    smurf;

    int t;
    cin >> t;
    while (t--)
    {
        ll b, a;
        cin >> a >> b;
        ll x = (a - b) * (a + b);
        V<ll> v = prime_factors(x);
        if (v.size() == 1)
        {
            cout << "YES" << el;
        }
        else
            cout << "NO" << el;
    }

    return 0;
}