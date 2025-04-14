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

ll ans;
void solve(ll n)
{

    // base case
    if (n < 10)
    {
        ans = n;
        return;
    }
    ll sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    // transition
    solve(sum);
}

int main()
{

    ll n;
    cin >> n;
    while (n != 0)
    {
        solve(n);
        cout << ans << "\n";
        cin >> n;
    }
    return 0;
}