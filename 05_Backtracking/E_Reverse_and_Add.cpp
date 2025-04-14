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

void solve(ll n, PLL &ans)
{
    ans.F++;
    ll reversed = 0;
    ll nn = n;
    while (nn > 0)
    {
        reversed = reversed * 10 + (nn % 10);
        nn /= 10;
    }
    // base case
    if (reversed == n)
    {
        ans.S = n;
        return;
    }
    else
    {
        n += reversed;
    }
    // transition
    solve(n, ans);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        PLL ans{-1, 0};
        solve(n, ans);
        cout << ans.F << " " << ans.S << "\n";
    }

    return 0;
}