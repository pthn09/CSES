#include <bits/stdc++.h>
using namespace std;

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,x;
      cin>>n>>x;
      long long s,m=x;
      if (x<0) s=0;
      else s=x;
      for (int i=2;i<=n;i++){
            cin>>x;
            s+=x;
            if (s>m) m=s;
            if (s<0) s=0;
      }
      cout<<m;
}
