#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    while (t--){
        long long x,y;
        cin>>y>>x;
        if (y<=x){
          if (x%2==1) cout<<x*x-y+1;
          else cout<<(x-1)*(x-1)+y;
        }
        else {
          if (y%2==0) cout<<y*y-x+1;
          else cout<<(y-1)*(y-1)+x;
        }
        cout<<'\n';
    }
}

