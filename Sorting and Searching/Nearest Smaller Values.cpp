#include <bits/stdc++.h>
using namespace std;
pair<int,int> x[200003];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,d=1;
      cin>>n;
      for (int i=1,a;i<=n;i++) {
            cin>>a;
            while (d>0&&x[d].first>=a) d--;
            if (d==0) cout<<0;
            else cout<<x[d].second;
            x[++d].first=a;
            x[d].second=i;
            cout<<" ";
      }
}
