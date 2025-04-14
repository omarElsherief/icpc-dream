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

int sum = 0;
string s1, s2;
int sum2 = 0;
V<int> yes;
V<int> no;

void solve(int pos, int len, int cur)
{
    if (pos == len)
    {
        if (cur == sum)
            yes.pb(cur);
        else
            no.pb(cur);
        return;
    }
    if (s2.at(pos) == '+')
    {
        solve(pos + 1, len, cur + 1);
    }
    else if (s2.at(pos) == '-')
    {
        solve(pos + 1, len, cur - 1);
    }
    else if (s2.at(pos) == '?')
    {
        solve(pos + 1, len, cur + 1);
        solve(pos + 1, len, cur - 1);
    }
}

int main()
{
    cin >> s1 >> s2;
    for (int i = 0; i < s1.size(); i++)
    {
        if (s1.at(i) == '+')
        {
            sum++;
        }
        else
            sum--;
    }
    solve(0, s2.size(), 0);
    double prob = (double)yes.size() / (yes.size() + no.size());
    cout << fixed << setprecision(12) << prob << endl;
    return 0;
}