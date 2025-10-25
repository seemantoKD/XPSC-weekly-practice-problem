#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin >> n;

    double ans = 0;
    while (n--)
    {
        double x, y;
        cin >> x >> y;
        ans += (x * y);
    }
    printf("%.3f\n",ans);
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