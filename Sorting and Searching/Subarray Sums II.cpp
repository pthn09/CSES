#include <bits/stdc++.h>
using namespace std;
map<long long,int> M;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n,x;
    long long s=0,res=0;
    cin>>n>>x;
    M[0]=1;
    for (int i=1,a;i<=n;i++) {
        cin>>a;
        s+=a;
        res+=M[s-x];
        M[s]++;
    }
    cout<<res;
}
