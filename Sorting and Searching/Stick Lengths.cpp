#include <bits/stdc++.h>
using namespace std;
long long p[200002];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      cin>>n;
      for (int i=0;i<n;i++) cin>>p[i];
      sort (p,p+n);
      long long k=p[n/2],ans=0;
      for (int i=0;i<n;i++) ans+=abs(p[i]-k);
      cout<<ans;
}
