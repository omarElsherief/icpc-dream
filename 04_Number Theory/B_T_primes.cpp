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

const int LIMIT = 1e7 + 9;
vector<bool> isPrime(LIMIT + 1, true);
vector<int> prime;
void Sieve_Of_Eratosthenes()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= LIMIT; i++)
    {
        if (isPrime[i])
            prime.push_back(i);
        for (int j = 0; j <= prime.size() && i * prime[j] < LIMIT; j++)
        {
            isPrime[i * prime[j]] = false;
            if (i % prime[j] == 0)
                break;
        }
    }
}
int main()
{
    smurf;
    Sieve_Of_Eratosthenes();
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        ll y = sqrt(x);
        if (y * y == x)
            isPrime[y] ? cout << "YES" << el : cout << "NO" << el;
        else
            cout << "NO" << el;
    }

    return 0;
}