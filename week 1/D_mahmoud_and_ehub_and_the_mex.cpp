#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n, k;
    cin >> n >> k;

    map<ll, ll> freq;
    vector<ll> v(n);
    for (auto &x : v)
    {
        cin >> x;
        freq[x]++;
    }

    ll ck = freq[k];
    ll miss = 0;
    for (ll i = 0; i < k; i++)
        if (freq[i] == 0)
            miss++;
    ll ans = ck + miss;
    cout << ans << endl;
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
// realated question cf mex rose div 3 recent contest c number ta
// set howay ekhane if else lage nai 