#include <bits/stdc++.h>
using namespace std;
int n,x[30];
long long a[30],res=LLONG_MAX;
void Try (int i){
      if (i>n){
            long long d1=0,d2=0;
            for (int k=1;k<=n;k++)
                  if (x[k]==1) d1+=a[k];
                  else d2+=a[k];
            res=min(res,abs(d1-d2));
            return;
      }
      for (int v=1;v<=2;v++){
            x[i]=v;
            Try(i+1);
      }
}
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      cin>>n;
      for (int i=1;i<=n;i++) cin>>a[i];
      Try(1);
      cout<<res;
}
