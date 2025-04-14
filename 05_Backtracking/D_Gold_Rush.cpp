#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// vector<int> pile;
void goldRush(int n, int m, bool &ans)
{
    if (n < 3)
        return;
    double left = n / 3.0;
    int right = (n * 2) / 3;
    // base case
    if (right == 2 * left)
    {
        if (left == m || right == m)
        {
            ans = true;
            return;
        }
    }
    else
        return;
    // transition
    goldRush(right, m, ans);
    goldRush(left, m, ans);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (n == m)
        {
            cout << "YES" << "\n";
            continue;
        }
        bool ans = false;
        goldRush(n, m, ans);
        if (ans)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}