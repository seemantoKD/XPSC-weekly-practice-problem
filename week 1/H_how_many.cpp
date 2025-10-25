#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll s, t;
    cin >> s >> t;
    ll count = 0;
    for (ll i = 0; i <= s; i++)
        for (ll j = 0; j <= s; j++)
            for (ll k = 0; k <= s; k++)
                if (i + j + k <= s and i * j * k <= t)
                    count++;
    cout << count << endl;
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