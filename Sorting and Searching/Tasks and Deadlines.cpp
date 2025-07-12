#include <bits/stdc++.h>
using namespace std;
pair<int,int> p[200003];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      cin>>n;
      for (int i=1;i<=n;i++) cin>>p[i].first>>p[i].second;
      sort (p+1,p+n+1);
      long long t=0,res=0;
      for (int i=1;i<=n;i++){
            t+=p[i].first;
            res+=p[i].second-t;
      }
      cout<<res;
}
