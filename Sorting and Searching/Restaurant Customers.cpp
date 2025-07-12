#include <bits/stdc++.h>
using namespace std;
pair<int,int> d[400003];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      cin>>n;
      for (int i=1;i<=n;i++) {
            cin>>d[i].first>>d[i+n].first;
            d[i].second=-1;
            d[i+n].second=1;
      }
      sort (d+1,d+2*n+1);
      int t=0,res=0;
      for (int i=1;i<=2*n;i++){
            t-=d[i].second;
            res=max(res,t);
      }
      cout<<res;
}
