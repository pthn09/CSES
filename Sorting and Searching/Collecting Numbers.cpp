#include <bits/stdc++.h>
using namespace std;
pair<int,int> a[200003];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      cin>>n;
      for (int i=1;i<=n;i++) {
            cin>>a[i].first;
            a[i].second=i;
      }
      sort (a+1,a+n+1);
      int cnt=0;
      for (int i=1;i<=n;i++)
            if (a[i].second>a[i+1].second) cnt++;
      cout<<cnt;
}
