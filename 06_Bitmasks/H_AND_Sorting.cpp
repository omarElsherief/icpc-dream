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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        V<int> v(n);
        V<int> v2;
        for (size_t i = 0; i < n; i++)
        {

            cin >> v[i];
            if (i)
            {
                if (v[i] != i)
                {
                    v2.push_back(v[i]);
                }
            }
        }
        sort(all(v2));
        cout << ((v2[v2.size() - 1]) & (v2[v2.size() - 2])) << el;
    }

    return 0;
}