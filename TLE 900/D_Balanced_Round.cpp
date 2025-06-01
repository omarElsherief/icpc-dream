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
        int n, k;
        cin >> n >> k;
        V<int> v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(all(v));
        int cnt = 1;
        int mx = 0;
        for (size_t i = 1; i < n; i++)
        {
            if (v[i] - v[i - 1] > k)
            {
                mx = max(mx, cnt);
                cnt = 1;
            }
            else
                cnt++;
        }
        mx = max(mx, cnt);
        cout << n - mx << el;
    }

    return 0;
}