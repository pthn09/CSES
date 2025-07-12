#include <bits/stdc++.h>
using namespace std;
multiset<int> S;
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      cin>>n;
      for (int i=1,k;i<=n;i++) {
            cin>>k;
            auto it=S.upper_bound(k);
            if (it!=S.end()) S.erase(it);
            S.insert(k);
      }
      cout<<S.size();
}
