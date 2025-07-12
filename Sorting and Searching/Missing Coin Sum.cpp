#include <bits/stdc++.h>
using namespace std;
long long x[200001];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      cin>>n;
      for (int i=1;i<=n;i++) cin>>x[i];
      sort (x+1,x+n+1);
      long long s=1;
      for (int i=1;i<=n;i++){
            if (s<x[i]) return cout<<s,0;
            s+=x[i];
      }
      cout<<s;
}
