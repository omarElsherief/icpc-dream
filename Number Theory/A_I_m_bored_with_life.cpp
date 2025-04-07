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
ll fac(ll n)
{
    ll f = 1;
    while (n != 1)
    {
        f *= n;
        n--;
    }
    return f;
}

ll solve(ll a, ll b)
{
    return fac(min(a, b));
}
int main()
{
    smurf;

    ll a, b;
    cin >> a >> b;
    cout << solve(a, b);

    return 0;
}