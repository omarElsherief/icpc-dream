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
    int n, q;
    cin >> n >> q;
    V<ll> v(n + 1);
    v[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        v[i] = v[i - 1] ^ x;
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << (v[b] ^ v[a - 1]) << el;
    }

    return 0;
}