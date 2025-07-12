#include <bits/stdc++.h>
using namespace std;
int a[200003],b[200003];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,m,k;
      cin>>n>>m>>k;
      for (int i=1;i<=n;i++) cin>>a[i];
      sort (a+1,a+n+1);
      for (int i=1;i<=m;i++) cin>>b[i];
      sort (b+1,b+m+1);
      int i=1,j=1,cnt=0;
      while (i<=n&&j<=m){
            if (a[i]-k<=b[j]&&a[i]+k>=b[j]) cnt++,i++,j++;
            else {
              if (a[i]-k>b[j]) j++;
              else i++;
            }
      }
      cout<<cnt;
}
