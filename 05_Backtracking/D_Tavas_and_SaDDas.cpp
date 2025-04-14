#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e10;

vector<ll> ans;
ll pos = 0;
void luckyNumbers(ll x)
{
    // base case
    ans.push_back(x);
    if (x > MAX)
    {
        return;
    }
    // transition
    luckyNumbers(x * 10 + 4);
    luckyNumbers(x * 10 + 7);
}
int main()
{
    luckyNumbers(0);
    int n;
    cin >> n;
    sort(ans.begin(), ans.end());
    for (ll i = 0; i < ans.size(); i++)
    {
        if (ans[i] == n)
            cout << i;
    }
    return 0;
}