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

ll factors(int n) // normal factors
{
    ll v = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v += i;
            if (i * i != n)
                v += n / i;
        }
    }
    return v;
}
int main()
{
    smurf;

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        cout << factors(x) - x << el;
    }

    return 0;
}