#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string s, t;
    cin >> s >> t;

    ll c = 0;
    for (ll i = 0; i < s.size(); i++)
        if (s[i] != t[i])
            c++;
    cout << c << endl;
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