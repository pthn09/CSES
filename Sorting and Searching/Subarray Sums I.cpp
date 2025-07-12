#include <bits/stdc++.h>
using namespace std;
int a[200003];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,x;
      cin>>n>>x;
      for (int i=1;i<=n;i++) cin>>a[i];
      int i=1,j=1;
      long long s=a[1],cnt=0;
      while (i<=n&&j<=n){
            if (s==x) {
                  cnt++;
                  s-=a[i++];
                  s+=a[++j];
            }
            else {
                  if (s>x) s-=a[i++];
                  else s+=a[++j];
            }
      }
      cout<<cnt;
}
