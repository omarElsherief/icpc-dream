#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAX = 1e10;

vector<ll> lucky;
void luckyNumbers(ll x, ll four, ll seven)
{
    // base case
    if (x > MAX)
        return;
    if (four == seven)
        lucky.push_back(x);
    // transition
    luckyNumbers(x * 10 + 4, four + 1, seven);
    luckyNumbers(x * 10 + 7, four, seven + 1);
}
int main()
{
    luckyNumbers(0, 0, 0);
    sort(lucky.begin(), lucky.end());
    ll n;
    cin >> n;
    for (int i = 0; i < lucky.size(); i++)
    {
        if (lucky[i] >= n)
        {
            cout << lucky[i] << "\n";
            return 0;
        }
    }
    return 0;
}