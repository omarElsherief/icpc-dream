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

int t, sums;
V<int> v(13);
V<int> ans;
ST<V<int>> s;
void solve(int n, int pos, int anpos)
{

    // base case
    if (pos == sums)
    {
        if (n == t)
        {
            s.insert(ans);
        }
        return;
    }
    // transition
    ans.pb(v[pos]);
    solve(n + v[pos], pos + 1, anpos);
    ans.pop_back();
    solve(n, pos + 1, anpos + 1);
}

int main()
{
    cin >> t >> sums;
    while (sums != 0 && t != 0)
    {
        for (size_t i = 0; i < sums; i++)
        {
            cin >> v[i];
        }
        solve(0, 0, 0);
        cout << "Sums of " << t << ":\n";
        if (s.empty())
        {
            std::cout << "NONE" << std::endl;
            cin >> t >> sums;
            continue;
        }
        for (auto it = s.rbegin(); it != s.rend(); ++it)
        {
            const auto &vec = *it;
            for (size_t i = 0; i < vec.size(); i++)
            {
                cout << vec[i];
                if (i < vec.size() - 1)
                    cout << "+";
            }
            cout << endl;
        }

        s.clear();
        cin >> t >> sums;
    }

    return 0;
}