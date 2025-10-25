#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        ll result = n * (n + 1) * (2 * n + 1);
        result /= 6;
        cout << result << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    // cin>>t;

    while (t--)
        seemanto();
    return 0;
}