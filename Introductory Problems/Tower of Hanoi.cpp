#include <bits/stdc++.h>
using namespace std;
void F (int a,int b,int c,int n){
      if (n==0) return;
      F(a,c,b,n-1);
      cout<<a<<" "<<c<<'\n';
      F(b,a,c,n-1);
}
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      cin>>n;
      cout<<(1<<n)-1<<'\n';
      F(1,2,3,n);
}
