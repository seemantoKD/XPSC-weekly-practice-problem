#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &x : v)
        cin >> x;

    ll op = 0;
    ll c1 = count(v.begin(), v.end(), 1);
    if (c1 % 2 == 0)
        op += c1 / 2;
    else
    {
        op += 1;
        op += c1 / 2;
    }
    op += (n - c1);
    cout << op << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin>>t;

    while (t--)
        seemanto();
    return 0;
}