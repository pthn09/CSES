#include <bits/stdc++.h>
using namespace std;
unordered_map<int,int> M;
int a[200003];
int main() {
      ios_base::sync_with_stdio(0);
      cin.tie(0); cout.tie(0);
      int k,n;
      cin>>n>>k;
      for (int i=1;i<=n;i++) cin>>a[i];
      int l=1,r=1;
      long long res=0;
      while (r<=n){
            M[a[r]]++;
            while (M.size()>k){
                  M[a[l]]--;
                  if (M[a[l]]==0) M.erase(a[l]);
                  l++;
            }
            res+=(r-l+1);
            r++;
      }
      cout<<res;
}
