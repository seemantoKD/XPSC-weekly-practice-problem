#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll a, b;
    cin >> a >> b;
    if (a > 0 && b > 0)
        cout << 1 << endl;
    else if (a < 0 && b > 0)
        cout << 2 << endl;
    else if (a < 0 && b < 0)
        cout << 3 << endl;
    else
        cout << 4 << endl;
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