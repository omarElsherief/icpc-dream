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
vector<int> prime_factors(int n)
{
    vector<int> f;
    for (int x = 2; x * x <= n; x++)
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

    int n, k;
    cin >> n >> k;
    V<int> v = prime_factors(n);
    if (k > v.size())
        cout << -1 << el;
    else if (v.size() > k)
    {
        int last = 1;
        for (ll i = 0; i < v.size(); i++)
        {
            if (i >= k - 1)
            {
                last *= v[i];
            }
            else
            {
                cout << v[i] << " ";
            }
        }
        cout << last;
    }
    else
    {
        for (int i = 0; i < k; i++)
        {
            cout << v[i] << " ";
        }
    }

    return 0;
}