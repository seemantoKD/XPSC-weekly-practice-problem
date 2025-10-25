#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string s;
    cin >> s;
    vector<char> c;
    c.push_back(s[0]);
    for (ll i = 1; i < s.size(); i++)
    {
        if (s[i] == '-')
            c.push_back(s[i + 1]);
    }
    for (auto u : c)
        cout << u;
    cout << endl;
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