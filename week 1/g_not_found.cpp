#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
using ll = long long int;

void seemanto()
{
    string str;
    cin >> str;

    set<char> s(str.begin(), str.end());

    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        if (s.find(ch) == s.end())
        {
            cout << ch << endl;
            return;
        }
    }

    cout << "None\n";
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