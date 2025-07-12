#include <bits/stdc++.h>
using namespace std;
int a[200003];
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for (int i=1,x;i<n;i++) {
        cin>>x;
        a[x]=1;
    }
    for (int i=1;i<=n;i++)
        if (a[i]==0) cout<<i;
}
