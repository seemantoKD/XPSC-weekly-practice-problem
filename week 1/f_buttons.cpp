#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll a, b;
    cin >> a >> b;
    if (a > b)
        cout << a + (a - 1) << endl;
    else if (b > a)
        cout << b + (b - 1) << endl;
    else
        cout << a + b << endl;
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