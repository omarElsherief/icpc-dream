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

int binaryExponentiation(int x, int n, int mod) // complexity log2(n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res = (res % mod * x % mod) % mod;
        x = (x % mod * x % mod) % mod;
        n /= 2;
    }
    return res;
}
int main()
{
    smurf;

    int n, m;
    cin >> n >> m;
    if (n >= 27)
        cout << m;
    else
    {
        int x = binaryExponentiation(2, n, 1e8 + 1);
        cout << m % x;
    }
    return 0;
}