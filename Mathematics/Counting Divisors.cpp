#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int q;
    cin>>q;
    while (q--){
        int n,cnt=0;
        cin>>n;
        for (int i=1;i*i<=n;i++){
            if (n%i==0&&n/i!=i) cnt+=2;
            if (n%i==0&&n/i==i) cnt++;
        }
        cout<<cnt<<'\n';
    }
}
