#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    vector<int> v(n - 1);
    for (auto &x : v)
        cin >> x;

    ll ts = n * (n + 1) / 2;
    ll sum = 0;
    for (int i = 0; i < n - 1; i++)
        sum += v[i];
    cout << ts - sum << endl;
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