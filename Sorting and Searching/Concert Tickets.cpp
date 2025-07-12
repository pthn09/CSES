#include <bits/stdc++.h>
using namespace std;
multiset<int> S;
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,m;
      cin>>n>>m;
      for (int i=1,h;i<=n;i++) {
            cin>>h;
            S.insert(h);
      }
      multiset<int> :: iterator it;
      for (int i=1,x;i<=m;i++){
            cin>>x;
            if (!S.empty()){
                  it=S.lower_bound(x);
                  if (it==S.end()) --it;
                  while (x<*it&&it!=S.begin()) --it;
                  if (it==S.begin()&&x<*it) cout<<-1;
                  else {
                        cout<<*it;
                        S.erase(it);
                  }
            }
            else cout<<-1;
            cout<<'\n';
      }
}

