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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        if (n & 1)
        {
            cout << "4" << '\n';
            cout << "1 " << n - 1 << '\n';
            cout << "1 " << n - 1 << '\n';
            cout << n - 1 << ' ' << n << '\n';
            cout << n - 1 << ' ' << n << '\n';
        }
        else
        {
            cout << "2" << '\n';
            cout << "1 " << n << '\n';
            cout << "1 " << n << '\n';
        }

        return 0;
    }

    // x^x =0  if do it even times