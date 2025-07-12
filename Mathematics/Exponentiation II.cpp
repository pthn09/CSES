#include <bits/stdc++.h>
using namespace std;
long long cal (long long a,long long b,long long MOD){
    if (b==0) return 1;
    long long k=cal(a,b/2,MOD)%MOD;
    k*=k;
    k%=MOD;
    if (b%2==0) return k;
    else return (k*a)%MOD;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    while (n--){
        long long a,b,c;
        cin>>a>>b>>c;
        cout<<cal(a,cal(b,c,1000000006),1000000007)<<'\n';
    }
}
