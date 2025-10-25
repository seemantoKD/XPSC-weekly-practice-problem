#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string s;
    cin >> s;

    string t = "ss";
    ll pos = s.find(t);

    if (pos != string ::npos)
        cout << "hiss\n";
    else
        cout << "no hiss\n";
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