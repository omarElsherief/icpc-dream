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
        int len;
        cin >> len;
        string str;
        cin >> str;
        int cnt = 1;
        int mx = 1;
        for (size_t i = 1; i < str.size(); i++)
        {
            if (str[i] == str[i - 1])
            {
                cnt++;
                mx = max(mx, cnt);
            }
            else
                cnt = 1;
        }
        cout << mx + 1 << el;
    }

    return 0;
}