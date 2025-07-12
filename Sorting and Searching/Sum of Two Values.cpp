#include <bits/stdc++.h>
using namespace std;
pair<int,int> a[200002];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,x;
      cin>>n>>x;
      for (int i=1;i<=n;i++) {
            cin>>a[i].first;
            a[i].second=i;
      }
      sort (a+1,a+n+1);
      for (int i=1;i<=n;i++){
            int l=i+1,r=n;
            while (l<=r){
                  int m=(l+r)/2;
                  if (a[m].first==x-a[i].first) return cout<<a[m].second<<" "<<a[i].second,0;
                  if (a[m].first<x-a[i].first) l=m+1;
                  else r=m-1;
            }
      }
      cout<<"IMPOSSIBLE";
}
