#include <bits/stdc++.h>
using namespace std;
int p[200003];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,x;
      cin>>n>>x;
      for (int i=1;i<=n;i++) cin>>p[i];
      sort (p+1,p+n+1);
      int res=0;
      int i=1,j=n;
      while (i<=j){
            if (p[i]+p[j]<=x) res++,i++,j--;
            else res++,j--;
      }
      cout<<res;
}

