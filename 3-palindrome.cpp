
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n; cin >> n;
    string s = "";
    for(int i=0; i<n/2; ++i){
        if(i&1) s +="bb";
        else s +="aa";
    }
    cout << s ;
    if(n&1)cout << ((s[n-2]=='a')?"b":"a") << endl;
    return 0;
}
