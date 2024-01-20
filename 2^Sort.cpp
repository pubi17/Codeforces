
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define Max(x,y,z) max(x,max(y,z))
#define Min(x,y,z) min(x,min(y,z))
#define fr(i,s,e) for(i=s;i<e;i++)
#define rf(i,s,e) for(i=s-1;i>=e;i--)
#define pb push_back
#define eb emblace_back
#define mp make_pair
typedef long long ll;

#define PI 3.141592653589793
#define MOD 1000000007
void solve()
{
        ll n, k; cin >> n >> k;
        vector<ll>v(n+1),a(n,0); for(ll i=1; i<=n; ++i) cin >> v[i];
        for(ll i=1; i<=n-1; ++i)
        {
                if(v[i]<v[i+1]*2LL) a[i] = 1;
        }
        ll sum = 0, ans = 0;
        for(ll i=1; i<=k-1; ++i) sum += a[i];
        for(ll i=k; i<=n-1; ++i){
                sum += a[i];
                 if(sum==k) ans++;
                sum -= a[i-k+1];
        }
        cout << ans << endl;

}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
            solve();
    }

    return 0;
}
