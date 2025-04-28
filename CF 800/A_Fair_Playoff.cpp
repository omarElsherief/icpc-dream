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
        int arr[4];
        cin >> arr[0];
        cin >> arr[1];
        int mx1 = max(arr[0], arr[1]);
        int mn1 = min(arr[0], arr[1]);
        cin >> arr[2];
        cin >> arr[3];
        int mx2 = max(arr[2], arr[3]);
        int mn2 = min(arr[2], arr[3]);
        mn2 > mx1 || mn1 > mx2 ? cout << "NO" << el : cout << "YES" << el;
    }

    return 0;
}