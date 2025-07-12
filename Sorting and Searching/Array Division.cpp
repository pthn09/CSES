#include <bits/stdc++.h>
using namespace std;
long long a[200001],k,n;
bool check (long long m){
      long long s=0,cnt=0;
      for (int i=1;i<=n;i++) {
            s+=a[i];
            if (s>m){
                  cnt++;
                  s=a[i];
            }
      }
      if (s>0) cnt++;
      return (cnt<=k);
}
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      long long r=0,l=1;
      cin>>n>>k;
      for (int i=1;i<=n;i++) {
            cin>>a[i];
            l=max(l,a[i]);
            r+=a[i];
      }
      long long res;
      while (l<=r){
            long long m=(l+r)/2;
            if (check(m)){
                  res=m;
                  r=m-1;
            }
            else l=m+1;
      }
      cout<<res;
}
