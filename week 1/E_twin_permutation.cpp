#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;

    ll ans = n + 1;

    vector<ll> a(n);
    vector<ll> b;

    for (auto &x : a)
        cin >> x;

    for (ll i = 0; i < n; i++)
        b.push_back(ans - a[i]);

    for (auto val : b)
        cout << val << ' ';
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;

    while (t--)
        seemanto();
    return 0;
}

/*
    tricks :
        -> not focus on <= , only focus ==
*/

/*
    learning :
        -> ekti permutation array deya ache , onno arekti permutation kuje ber korbo
            jeno a1 + b1 <= a2 + b2 <= a3 + b3 .... <= an+bn hoy

            ans : bi = n + 1 - ai
*/