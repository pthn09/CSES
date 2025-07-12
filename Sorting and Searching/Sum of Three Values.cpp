#include <bits/stdc++.h>
using namespace std;
pair <long long,int> a[5002];
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
      for (int i=1;i<n-1;i++){
            long long S=a[i].first;
            int l=i+1,r=n;
            while (l<r){
                  if (S+a[l].first+a[r].first==x) return cout<<a[i].second<<" "<<a[l].second<<" "<<a[r].second,0;
                  if (S+a[l].first+a[r].first<x) l++;
                  else r--;
            }
      }
      cout<<"IMPOSSIBLE";
}

