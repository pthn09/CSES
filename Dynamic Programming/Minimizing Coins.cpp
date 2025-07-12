#include <bits/stdc++.h>
using namespace std;
int c[101],f[1000001];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,x;
      cin>>n>>x;
      for (int i=1;i<=n;i++) cin>>c[i];
      for (int i=1;i<=x;i++) f[i]=1000001;
      f[0]=0;
      for (int i=1;i<=n;i++)
            for (int j=c[i];j<=x;j++)
                f[j]=min(f[j],f[j-c[i]]+1);
      if (f[x]==1000001) cout<<"-1";
      else cout<<f[x];
}
