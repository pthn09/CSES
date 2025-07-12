#include <bits/stdc++.h>
using namespace std;
pair <int,int> d[200002];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
  int n,x=0,res=0;
  cin>>n;
  for (int i=1;i<=n;i++) cin>>d[i].second>>d[i].first;
  sort (d+1,d+n+1);
  for (int i=1;i<=n;i++)
    if (d[i].second>=x){
      res++;
      x=d[i].first;
    }
  cout<<res;
}

