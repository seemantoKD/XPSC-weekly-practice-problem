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

    ll r = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i + 1] < v[i])
        {
            r += v[i] - v[i + 1];
            v[i + 1] = v[i];
        }
    }
    cout << abs(r) << endl;
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