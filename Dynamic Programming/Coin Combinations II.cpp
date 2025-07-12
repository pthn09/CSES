#include <bits/stdc++.h>
using namespace std;
const int MOD=1e9+7;
int c[101];
long long f[1000001];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,x;
      cin>>n>>x;
      for (int i=1;i<=n;i++)
        cin>>c[i];
      f[0]=1;
      for (int i=1;i<=n;i++)
        for (int j=c[i];j<=x;j++){
          f[j]+=f[j-c[i]];
          f[j]=f[j]%MOD;
        }
      cout<<f[x];
}
