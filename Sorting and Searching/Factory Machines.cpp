#include <bits/stdc++.h>
using namespace std;
long long n,t,k[200003];
bool check (long long m){
      long long cnt=0;
      for (int i=1;i<=n;i++) {
            cnt+=(m/k[i]);
            if (cnt>=t) return true;
      }
      return false;
}
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      cin>>n>>t;
      for (int i=1;i<=n;i++) cin>>k[i];
      sort(k+1,k+n+1);
      long long l=1,r=k[n]*t,res;
      while (l<=r){
            long long m=(l+r)/2;
            if (check(m)==true){
                  res=m;
                  r=m-1;
            }
            else l=m+1;
      }
      cout<<res;
}
