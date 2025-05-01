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

bool check(ll n)
{
    for (size_t i = 0; i < 64; i++)
    {
        if (n == (1LL << i))
            return false;
    }
    return true;
}

int main()
{
    smurf;
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        check(n) ? cout << "YES" << el : cout << "NO" << el;
    }

    return 0;
}