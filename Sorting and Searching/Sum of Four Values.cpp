#include <bits/stdc++.h>
using namespace std;
pair<long long,int> a[1003];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      long long x;
      cin>>n>>x;
      for (int i=1;i<=n;i++) {
            cin>>a[i].first;
            a[i].second=i;
      }
      sort (a+1,a+n+1);
      for (int i=1;i<n-2;i++)
            for (int j=i+1;j<n-1;j++){
                  long long s=a[i].first+a[j].first;
                  int l=j+1,r=n;
                  while (l<r){
                        if (s+a[l].first+a[r].first==x) return cout<<a[i].second<<" "<<a[j].second<<" "<<a[l].second<<" "<<a[r].second,0;
                        if (s+a[l].first+a[r].first<x) l++;
                        else r--;
                  }
            }
      cout<<"IMPOSSIBLE";
}

