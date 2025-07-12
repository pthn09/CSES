#include <bits/stdc++.h>
using namespace std;

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      long long T=0,mt=0,t;
      cin>>n;
      for (int i=1;i<=n;i++){
            cin>>t;
            T+=t;
            mt=max(mt,t);
      }
      cout<<max(2*mt,T);
}
