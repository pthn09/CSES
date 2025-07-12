#include<bits/stdc++.h>
using namespace std;
int solve (int n,int k){
    if (n==1) return 1;
    if (k<=n/2) return k*2;
    int res=solve(n-n/2,k-n/2);
    return 2*res-1-(n%2==0);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int q,n,k;
    cin>>q;
    while (q--){
        cin>>n>>k;
        cout<<solve(n,k)<<'\n';
    }
}
