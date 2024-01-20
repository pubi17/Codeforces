#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define pb push_back
#define eb emblace_back
#define mp make_pair
typedef long long ll;
const int maxx = 100005;
int dis[maxx], vis[maxx];
vector<int>g[maxx];

void dfs(int u, int p, int d)
{
        dis[u] = d;
        for(auto v:g[u]){
                if(v==p);
                else dfs(v, u, d+1);
        }
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n, m; cin >> n >> m;

    for(int i=0; i<m; ++i){
        int u, v; cin >> u >> v; u--; v--; g[u].pb(v); g[v].pb(u);
    }

    dfs(0, -1, 0);

    int mx = max_element(dis, dis+n)-dis;

    dfs(mx, -1, 0);

    int dia = *max_element(dis, dis+n);

    cout << dia << endl;

    return 0;
}
