#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int binaryExponentiation(int x, int n) // complexity log2(n)
{
    int res = 1;
    while (n > 0)
    {
        if (n % 2 == 1)
            res *= x;
        x = x * x;
        n /= 2;
    }
    return res;
}
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
vector<ll> factors(ll n)
{
    vector<ll> v;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            if (i * i != n)
                v.push_back(n / i);
        }
    }
    return v;
}
vector<int> prime_factors(int n)
{
    vector<int> f;
    for (int x = 2; x * x <= n; x++)
    {
        while (n % x == 0)
        {
            f.push_back(x);
            n /= x;
        }
    }
    if (n > 1)
        f.push_back(n);
    return f;
}
ll GCD(ll a, ll b) // Euclid algo
{
    if (b > a)
        swap(a, b);
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll LCM(int a, int b)
{
    return a / GCD(a, b) * b;
}
int main()
{
    ll a, b;
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}