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
        int n, ans;
        cin >> n;

        if (n % 2 == 0)
        {
            ans = n / 2;
            cout << ans << " " << ans - 1 << " " << 1 << el;
        }
        else
        {
            int cur = (n - 1) / 2;
            if (cur % 2 == 0)
                cout << cur - 1 << " " << cur + 1 << " " << 1 << endl;
            else
                cout << cur - 2 << " " << cur + 2 << " " << 1 << endl;
        }
    }

    return 0;
}