#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Binary Exponentiation Functions
// Time: O(log n), Space: O(1)
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

// Time: O(log n), Space: O(1)
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

// Factor Functions
// Time: O(sqrt(n)), Space: O(sqrt(n))
vector<ll> factors(ll n) // normal factors
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

// Time: O(sqrt(n)), Space: O(log n) - due to prime factorization
vector<int> prime_factors(int n) // prime factors
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

// GCD and LCM Functions
// Time: O(log(min(a,b))), Space: O(log(min(a,b))) due to recursion
ll GCD(ll a, ll b) // Euclid algo
{
    if (b > a)
        swap(a, b);
    if (b == 0)
        return a;
    return GCD(b, a % b);
}
// Time: O(log(min(a,b))), Space: O(log(min(a,b)))
ll LCM(int a, int b)
{
    return a / GCD(a, b) * b;
}

// Sieve Of Eratosthenes
// n*log(log(n))
const int LIMIT = 1e7 + 9;
vector<bool> isPrime(LIMIT + 1, true);
void Sieve_Of_Eratosthenes()
{
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= LIMIT; i++)
    {
        if (!isPrime[i])
            continue;
        for (int j = 2 * i; j <= LIMIT; j += i)
        {
            isPrime[j] = false;
        }
    }
}

// Linear Sieve
// o(n)
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
    ll a, b;
    cin >> a >> b;
    cout << GCD(a, b);
    return 0;
}