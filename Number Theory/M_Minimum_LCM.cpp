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
M<int, pair<int, int>> m;

bool isPrime(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int prime_factors(int n)
{
    for (int x = 2; x * x <= n; x++)
    {
        while (n % x == 0)
        {
            return x;
            n /= x;
        }
    }
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
        if (n % 2 == 0)
            cout << n / 2 << " " << n / 2 << el;
        else
        {
            if (isPrime(n))
                cout << 1 << " " << n - 1 << el;
            else
            {
                cout << n / prime_factors(n) << " " << n - n / prime_factors(n) << el;
            }
        }
    }

    return 0;
}