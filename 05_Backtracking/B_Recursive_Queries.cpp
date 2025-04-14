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

UM<int, int> mem;
int f(int n)
{
    if (mem.find(n) != mem.end())
        return mem[n];
    else
    {
        int prod = 1;
        int temp = n;
        while (n > 0)
        {
            if (n % 10 > 0)
                prod *= n % 10;
            n /= 10;
        }
        mem[n] = prod;
        return prod;
    }
}
int g(int n)
{
    if (n < 10)
    {
        return n;
    }
    else
    {
        return g(f(n));
    }
}
V<V<int>> pre(10, V<int>(1e6 + 1));
void all_g()
{
    for (int i = 1; i <= 1e6; i++)
    {
        pre[g(i)][i]++;
    }
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 1e6; j++)
        {
            pre[i][j] = pre[i][j] + pre[i][j - 1];
        }
    }
}
int main()
{
    all_g();
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, k;
        cin >> l >> r >> k;
        cout << pre[k][r] - pre[k][l - 1] << "\n";
    }

    return 0;
}
