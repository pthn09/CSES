#include <bits/stdc++.h>
using namespace std;
int a[1000003]={0};
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      long long n;
      cin>>n;
      long long s=n*(n+1)/2;
      if (s%2!=0) return cout<<"NO",0;
      else {
            cout<<"YES"<<'\n';
            s/=2;
            int d=0;
            for (int i=n;i>=1;i--)
                  if (s-i>=0){
                        s-=i;
                        a[i]++;
                        d++;
                  }
            cout<<d<<'\n';
            for (int i=1;i<=n;i++) if (a[i]>=1) cout<<i<<" ";
            cout<<'\n'<<n-d<<'\n';
            for (int i=1;i<=n;i++) if (a[i]==0) cout<<i<<" ";
      }
}
