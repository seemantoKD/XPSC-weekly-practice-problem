#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;
    if (n < 3)
        cout << n << endl;
    else if (n == 3)
        cout << 6 << endl;
    else if (n == 4)
        cout << 4 << endl;
    else
        cout << 0 << endl;
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