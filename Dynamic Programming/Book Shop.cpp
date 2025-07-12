#include <bits/stdc++.h>
using namespace std;
int h[1001],s[1001],dp[100001];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,x;
      cin>>n>>x;
      for (int i=1;i<=n;i++) cin>>h[i];
      for (int i=1;i<=n;i++) cin>>s[i];
      for (int i=1;i<=n;i++)
        for (int j=x;j>=h[i];j--)
          dp[j]=max(dp[j],dp[j-h[i]]+s[i]);
      cout<<dp[x];
}
