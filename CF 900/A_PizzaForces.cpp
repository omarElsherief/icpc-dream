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
        ll n, ans;
        cin >> n;
        cout << max(6LL, n + 1) / 2 * 5 << '\n';
    }

    return 0;
}
// Note that the "speed" of cooking 1 slice of pizza is the same for all sizes — 1 slice of pizza for 2.5

// minutes.

// If n
// is odd, then we will increase it by 1 (since the pizza is cooked only with an even number of pieces). Now the value of n is always even. If n<6, then for such n the answer is equal to the answer for n=6, so we can say that n=max(n,6). While n≥12 we can order a small pizza. Eventually the value of n will be equal to 6, 8 or 10. This means that for any n there will be a set of pizzas with exactly n slices. Then the answer is n∗2.5 (in the solution, it is better to use the formula n/2∗5).