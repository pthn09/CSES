#include <bits/stdc++.h>
using namespace std;
set<int> S;
multiset<int> maxL;
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int x,n,p,res=0;
      cin>>x>>n;
      S.insert(0);
      S.insert(x);
      maxL.insert(x);
      while (n--){
            cin>>p;
            auto it=S.lower_bound(p);
            maxL.erase(maxL.find(*it-*--it));
            maxL.insert(*++it-p);
            maxL.insert(p-*--it);
            S.insert(p);
            cout<<*(maxL.rbegin())<<" ";
      }
}
