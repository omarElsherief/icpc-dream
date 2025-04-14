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

vector<ll> factors(ll n) // normal factors
{
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i * i != n)
                v.push_back(n / i);
        }
    }
    return v;
}
int main()
{
    smurf;

    ll n, k;
    cin >> n >> k;
    V<ll> v = factors(n);
    sort(all(v));
    v.size() >= k ? cout << v[k - 1] << el : cout << -1;
    return 0;
}