#include <bits/stdc++.h>
using namespace std;
long long M[200001];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int n;
      long long s=0,cnt=0;
      cin>>n;
      for (int i=1,a;i<=n;i++) {
            cin>>a;
            s+=a;
            M[(s%n+n)%n]++;
      }
      for (int i=1;i<n;i++) cnt+=M[i]*(M[i]-1)/2;
      cout<<cnt+M[0]*(M[0]+1)/2;
}
