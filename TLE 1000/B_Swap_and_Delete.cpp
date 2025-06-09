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
    // smurf;

    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (str.size() == 1)
        {
            cout << 1 << el;
            continue;
        }
        int o = 0, z = 0;
        for (size_t i = 0; i < str.size(); i++)
        {
            if (str[i] == '1')
                o++;
            else
                z++;
        }
        if (o == z)
        {
            cout << 0 << el;
            continue;
        }
        for (size_t i = 0; i < str.size(); i++)
        {
            if (str[i] == '1' && z == 0)
            {
                cout << o << el;
                break;
            }
            else if (str[i] == '0' && o == 0)
            {
                cout << z << el;
                break;
            }
            else if (str[i] == '1')
                z--;
            else if (str[i] == '0')
            {
                o--;
            }
        }
    }

    return 0;
}