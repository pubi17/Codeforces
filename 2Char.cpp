#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef long long ll;

int main()
{
   int n; cin >> n;
   vector<pair<string,int>>v;
   map<string,int>mp;
   for(int i=0; i<n; ++i){
     string s; cin >> s;
     int ln = s.size();
     sort(s.begin(), s.end() );
     s.erase(unique(s.begin(),s.end()),s.end());
     if (s.size()<=2){
      v.push_back({s,ln});
     }
     if(s.size()==1){
      mp[s] += ln;
     }
   }

   vector<int>ss;
   for(auto x:mp) ss.push_back(x.second);

   sort(ss.begin(), ss.end());
   int mx = 0;
   if(ss.size()>=2){
      mx += ss[ss.size()-1];
      mx += ss[ss.size()-2];
   }

   for(int i=0; i<v.size(); ++i){
         string st = v[i].first;
         int ln = v[i].second;
      for(int j=0; j<v.size(); ++j){
            if(i==j)continue;
         string tt = v[j].first;
         if (st.find(tt) != string::npos) {
            ln += v[j].second;}
         }
      mx = max(mx,ln);
   }
   cout << mx << endl;
    return 0;
}
