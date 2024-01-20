#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        int z = 0, o = 0;

        for(int i=0; i<s.size(); ++i)
        {
            if(s[i]=='0') z++;
            else if(s[i]=='1') o++;
        }
        int mn = min(z, o);

        cout << ((mn&1) ? "DA" : "NET") << endl;
    }

    return 0;
}

