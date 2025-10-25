#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    ll n;
    cin>>n;
    string s;
    vector<string>v;
    for(ll i = 0;i<n;i++)
    {
        cin>>s;
        if(i % 2 == 0)
            v.push_back(s);
    }
    for(auto u : v)
        cout<<u<<endl;
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