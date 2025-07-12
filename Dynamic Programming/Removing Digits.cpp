#include <bits/stdc++.h>
using namespace std;
int maxD (int a){
      int m=0;
      while (a>0){
        m=max(m,a%10);
        a/=10;
      }
      return m;
}
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n,cnt=0;
      cin>>n;
      while (n>0){
        n-=maxD(n);
        cnt++;
      }
      cout<<cnt;
}
