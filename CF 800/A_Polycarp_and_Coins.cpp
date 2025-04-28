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
        int n;
        cin >> n;
        int c1, c2;
        int x = n % 3;
        n -= x;
        c1 = c2 = n / 3;
        x == 1 ? cout << c1 + 1 << " " << c2 << el : cout << c1 << " " << c2 + x / 2 << el;
    }

    return 0;
}