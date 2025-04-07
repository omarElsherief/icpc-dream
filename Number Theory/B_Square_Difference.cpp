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
    UM<ll, bool> prm;
    for (ll i = 2; i < 1e11; i++)
    {
        if (prime_factors(i).size() == 1)
            prm[i] = true;
        else
            prm[i] = false;
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll b, a;
        cin >> b >> a;
        ll x = b * b - a * a;

        if (prm[x])
        {
            cout << "YES" << el;
        }
        else
            cout << "NO" << el;
    }

    return 0;
}