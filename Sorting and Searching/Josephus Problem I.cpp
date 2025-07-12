#include <bits/stdc++.h>
using namespace std;
list<int> v;
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      cin>>n;
      for (int i=1;i<=n;i++) v.push_back(i);
      while(v.empty()==false){
            v.push_back(*v.begin());
            v.erase(v.begin());
            cout<<v.front()<<" ";
            v.erase(v.begin());
      }
}
