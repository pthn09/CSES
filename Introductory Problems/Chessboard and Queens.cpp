#include <bits/stdc++.h>
using namespace std;
int n,x[15],c[15],c1[30],c2[30],res=0,a[10][10];
void Try (int i){
      if (i>n){
            res++;
            return;
      }
      for (int v=1;v<=n;v++)
            if (c[v]==0&&c1[i+v]==0&&c2[i-v+n]==0&&a[i][v]==0){
                  x[i]=v;
                  c[v]=1;
                  c1[i+v]=1;
                  c2[i-v+n]=1;
                  Try(i+1);
                  c[v]=0;
                  c1[i+v]=0;
                  c2[i-v+n]=0;
            }
}
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      n=8;
      char k;
      for (int i=1;i<=n;i++)
            for (int j=1;j<=n;j++){
                  cin>>k;
                  if (k=='*') a[i][j]=1;
            }
      Try(1);
      cout<<res;
}
