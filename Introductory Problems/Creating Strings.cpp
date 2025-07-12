#include <bits/stdc++.h>
using namespace std;
string a[50000];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      string s;
      int cnt=0;
      cin>>s;
      sort (s.begin(),s.end());
      do {
            cnt++;
            a[cnt]=s;
      } while (next_permutation(s.begin(),s.begin()+s.size()));
      cout<<cnt<<'\n';
      for (int i=1;i<=cnt;i++) cout<<a[i]<<'\n';
}

