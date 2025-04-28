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

bool cmp(int x, int y)
{
    return x % 2 < y % 2;
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
        V<int> v(n);
        for (size_t i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0;
        sort(all(v), cmp);
        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = i + 1; j < n; j++)
            {
                cnt += __gcd(v[i], v[j] * 2) > 1;
            }
        }
        cout << cnt << el;
    }

    return 0;
}
// If the value of ai is even, then gcd(ai,2aj) at least 2, regardless of the value of aj. Therefore, we can put all the even values before the odd ones (it does not matter in what order). Now it remains to arrange the odd values. In fact, their order is not important, because gcd(ai,2aj)=gcd(ai,aj) (for odd ai and aj). This means that each pair will be considered exactly 1 time, regardless of the order of the odd elements.