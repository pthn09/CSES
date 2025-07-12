#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    long long a,b,res=0;
    cin>>n>>a;
    for (int i=2;i<=n;i++){
        cin>>b;
        a=max(a,b);
        res+=a-b;
    }
    cout<<res;
}
