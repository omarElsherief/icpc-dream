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

int func(int mx, int op)
{
    int cnt = 0;
    while (op > 0)
    {
        op -= mx;
        mx *= 2;
        cnt++;
    }
    return cnt;
}

int main()
{
    smurf;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int MAX = 1e9;
        UM<int, int> freq;
        int mx = 0;
        for (size_t i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            freq[x]++;
            mx = max(freq[x], mx);
        }
        if (n == 1)
        {
            cout << 0 << el;
            continue;
        }
        int op = n - mx;
        op += func(mx, op);
        cout << op << el;
    }

    return 0;
}