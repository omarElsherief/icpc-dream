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

int binaryExponentiation(int x, int n) // complexity log2(n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res *= x;
        x = x * x;
        n /= 2;
    }
    return res;
}
bool solve(int n)
{
    for (int i = 0; i <= 32; i++)
    {
        int x = (binaryExponentiation(2, i) - 1) * (binaryExponentiation(2, i - 1));
        if (x == n)
            return true;
    }
    return false;
}

vector<ll> factorization(ll n)
{
    vector<ll> v;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (solve(i))
                v.push_back(i);
            if (i * i != n)
            {
                if (solve(n / i))
                    v.push_back(n / i);
            }
        }
    }
    return v;
}
int main()
{
    smurf;

    ll n;
    cin >> n;
    V<ll> v = factorization(n);
    sort(all(v));
    cout << v[v.size() - 1];
    return 0;
}