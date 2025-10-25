#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll x, y, k;
    cin >> x >> y >> k;

    x = abs(x);
    ll d = abs(x - y);
    if (d <= k)
        cout << "Yes\n";
    else
        cout << "No\n";
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