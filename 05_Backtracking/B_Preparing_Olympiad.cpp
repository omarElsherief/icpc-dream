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
#define F first
#define S second
#define PLL pair<long long, long long>
#define PII pair<int, int>
#define all(a) a.begin(), a.end()

int mx = 0;
int mn = 1e9;
int n, l, r, x;
V<int> v;
int ans = 0;
void solve(int sum, int pos, int mx, int mn, int cnt)
{
    // base case
    if (pos == v.size())
    {
        if (sum >= l && sum <= r && mx - mn >= x && cnt > 1)
        {
            ans++;
        }
        return;
    }
    // transition
    solve(sum + v[pos], pos + 1, max(v[pos], mx), min(v[pos], mn), cnt + 1);
    solve(sum, pos + 1, mx, mn, cnt);
}

int main()
{
    cin >> n >> l >> r >> x;
    for (size_t i = 0; i < n; i++)
    {
        int item;
        cin >> item;
        v.pb(item);
    }
    solve(0, 0, mx, mn, 0);
    cout << ans;

    return 0;
}