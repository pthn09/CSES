#include <bits/stdc++.h>
using namespace std;

int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int q;
      cin>>q;
      long long k;
      while (q--){
            cin>>k;
            long long t=1;
            int d=0;
            for (long long i=9; ;i*=10){
                  t*=10;
                  d++;
                  if (k-i*d>0) k-=i*d;
                  else break;
            }
            t=t/10+(k-1)/d;
            string s=to_string(t);
            cout<<s[(k-1)%d]<<'\n';
      }
}

