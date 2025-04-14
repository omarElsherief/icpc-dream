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

ll fac(ll a, ll b)
{
    ll fac = 1;
    if (b - a >= 10)
        return 0;
    if (b > a)
    {
        a++;
        while (a <= b)
        {
            fac = (fac % 10 * a % 10) % 10;
            a++;
        }
        return fac % 10;
    }
    else if (a == b)
        return 1;
}
int main()
{
    smurf;
    ll a, b;
    cin >> a >> b;
    cout << fac(a, b);
    return 0;
}